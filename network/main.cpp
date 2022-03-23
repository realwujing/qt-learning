#include <QCoreApplication>

#include <QThread>

#include "worker.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread* thread = new QThread();
    Worker* worker = new Worker(3000);
    worker->moveToThread(thread);
    QObject::connect(thread, SIGNAL(started()), worker, SLOT(start()));
    thread->start();

    qInfo() << "main thread......";

    return a.exec();
}