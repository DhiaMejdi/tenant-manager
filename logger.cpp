#include "logger.h"
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QDir>
#include <QDebug>

void logToFile(const QString &message) {
    QString logDirPath = "D:/transfer/transfer/proj/logs"; // Change to your desired path
    QString logFilePath = logDirPath + "/centerflow-"+QDateTime::currentDateTime().toString("yyyy-MM-dd")+".log";

    QDir dir(logDirPath);
    if (!dir.exists()) {
        if (!dir.mkpath(".")) {
            qDebug() << "❌ Failed to create log directory:" << logDirPath;
            return;
        }
    }

    QFile file(logFilePath);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        QString timestamp = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
        out << "[" << timestamp << "] " << message << "\n";
        file.close();
        qDebug() << "✅ Logged to" << logFilePath;
    } else {
        qDebug() << "❌ Failed to open log file for writing:" << logFilePath;
    }
}
