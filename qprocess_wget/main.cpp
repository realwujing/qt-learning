#include <QCoreApplication>

#include "wget.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
 
    Wget wget;
    wget.url = "https://linglong-api-dev.deepin.com/bundle/org.dde.calendar_5.8.27_x86_64_20220126103119_2401723550.uab";
    wget.download();
    return a.exec();
}