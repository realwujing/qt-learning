#pragma once

#include <QObject>
#include <QProcess>
#include <QString>
#include <QDebug>

class Wget : public QObject
{
    Q_OBJECT

public:
    Wget(QObject *parent = nullptr);
    ~Wget();

    bool download();

public slots:
    void showProgress(int progress, QString time);
    void showDone();
    void showError(int code, QString msg);

signals:
    void updateProgress(int progress, QString time);
    void haveDone();
    void haveError(int code, QString msg);

public:
    QProcess *wgetProcess;
    QString wgetFilePath = "wget";
    QString url;
    QStringList args;
    QString fileSize;
};