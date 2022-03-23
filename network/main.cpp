#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QEventLoop>
#include <QTextCodec>
#include <QJsonDocument>
#include <QJsonObject>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QNetworkRequest request;
    QNetworkAccessManager* naManager = new QNetworkAccessManager();
    QUrl strUrl("http://10.20.54.2:8888/apps/adddbusproxy");
    request.setUrl(strUrl);
    request.setRawHeader("Content-Type", "charset='utf-8'");
    request.setRawHeader("Content-Type", "application/json");

    QJsonObject param;
    param.insert("appId", QJsonValue::fromVariant("appId"));
    param.insert("name", QJsonValue::fromVariant("name"));
    param.insert("path", QJsonValue::fromVariant("path"));
    param.insert("interface", QJsonValue::fromVariant("interface11"));

    QNetworkReply* reply = naManager->post(request, QJsonDocument(param).toJson(QJsonDocument::Compact));
    QByteArray responseData;
    QEventLoop eventLoop;
    QObject::connect(naManager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    eventLoop.exec();
    QTextCodec* codec = QTextCodec::codecForName("utf8");
    QString strReply = codec->toUnicode(reply->readAll());
    reply->deleteLater();
    naManager->deleteLater();
 
    return a.exec();
}