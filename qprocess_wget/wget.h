#pragma once

#include <QObject>
#include <QProcess>
#include <QString>

class Wget : public QObject
{
    Q_OBJECT

public:
    Wget();
    ~Wget();

    bool download();

signals:
    void updateProgress(QString percent, QString timeLeft);
    void s_haveDone();
    void haveError();

public:
    QProcess *wgetProcess;
    QString wgetFilePath = "wget";
    QString url;
    QStringList args;
};