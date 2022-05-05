#include "wget.h"

Wget::Wget(QObject *parent) : QObject(parent), wgetProcess(new QProcess(this)), wgetFilePath("/usr/bin/wget")
{
    // wgetProcess = new QProcess(this);
    // connect(wgetProcess, SIGNAL(readyReadStandardOutput()), this, SLOT(readOutput()));
    // connect(wgetProcess, SIGNAL(readyReadStandardError()), this, SLOT(readError()));
    // connect(wgetProcess, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(finished(int, QProcess::ExitStatus)));

    connect(this, SIGNAL(updateProgress(int, QString)), this, SLOT(showProgress(int, QString)));
    connect(this, SIGNAL(haveDone()), this, SLOT(showDone()));
    connect(this, SIGNAL(haveError(int, QString)), this, SLOT(showError(int, QString)));
}

Wget::~Wget()
{
    delete wgetProcess;
}

bool Wget::download()
{
    bool ret = false;
    args << "--no-check-certificate" << url;
    connect(wgetProcess, &QProcess::readyReadStandardOutput, [&]()
            {
        //这里需要死循环处理，不然当wget下载完成，输出还没有读完，导致无法通知进度
        while (wgetProcess->bytesAvailable() > 0) {
            QString text = wgetProcess->readLine();
            QRegExp reg("[\\s0-9K]+[\\.\\s]+([0-9]{1,3})%\\s+([0-9\\.]+[KM])\\s+([0-9hms]+).*");
            reg.setCaseSensitivity(Qt::CaseInsensitive);
            QRegExp reg2("^[长度：]+([0-9]{0,1000}).*");
            reg2.setCaseSensitivity(Qt::CaseInsensitive);
            if (reg2.exactMatch(text)) {
                fileSize = reg2.cap(1).toLocal8Bit();
                if (fileSize.contains("27304312"))
                    qDebug() << "fileSize:" << fileSize;
            }

            if (reg.exactMatch(text)) {
                int progress = reg.cap(1).toInt();
                QString fileSize = reg.cap(2).toLocal8Bit();
                QString time = reg.cap(3).toLocal8Bit();
                // qDebug() << "progress:" << progress << "curSize:" << curSize << "time:" << time;
                emit updateProgress(progress, time);
            } else if (text.contains("100%")) {
                emit updateProgress(100, "0s");
            } else if (text.contains("已保存") && text.contains(QString("[%1/%2]").arg(fileSize).arg(fileSize))) {
                emit haveDone();
            }
        } });
    connect(wgetProcess, &QProcess::readyReadStandardError, [&]()
            {
        qWarning() << wgetProcess->readAllStandardError();
        emit haveError(2, wgetProcess->readAllStandardError()); });
    wgetProcess->setReadChannel(QProcess::StandardOutput);
    wgetProcess->setProcessChannelMode(QProcess::MergedChannels);
    qDebug() << wgetFilePath << args;
    wgetProcess->start(wgetFilePath, args);
    ret = wgetProcess->waitForFinished(-1);
    if (!ret)
    {
        qDebug() << wgetProcess->errorString();
        emit haveError(2, wgetProcess->errorString());
    }
    return ret;
}

void Wget::showProgress(int progress, QString time)
{
    qDebug() << "progress:" << progress << "time:" << time;
}

void Wget::showDone()
{
    qDebug() << "download done";
}

void Wget::showError(int code, QString msg)
{
    qDebug() << "error:" << code << msg;
}
