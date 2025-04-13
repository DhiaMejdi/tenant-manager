/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *idLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 300);
        Login->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 #a18cd1, stop:1 #fbc2eb);\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #6a3093;\n"
"    color: white;\n"
"    padding: 6px 12px;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #a044ff;\n"
"}"));
        idLineEdit = new QLineEdit(Login);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setGeometry(QRect(50, 70, 251, 51));
        idLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a18cd1;\n"
"    border-radius: 6px;\n"
"    padding: 6px 10px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                stop:0 #fbc2eb, stop:1 #a18cd1);\n"
"    color: #2e2e2e;\n"
"    font-size: 14px;\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"    selection-background-color: #a18cd1;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #6a3093;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                stop:0 #c471f5, stop:1 #fa71cd);\n"
"    color: black;\n"
"}"));
        passwordLineEdit = new QLineEdit(Login);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(50, 150, 251, 51));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a18cd1;\n"
"    border-radius: 6px;\n"
"    padding: 6px 10px;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                stop:0 #fbc2eb, stop:1 #a18cd1);\n"
"    color: #2e2e2e;\n"
"    font-size: 14px;\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"    selection-background-color: #a18cd1;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #6a3093;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                stop:0 #c471f5, stop:1 #fa71cd);\n"
"    color: black;\n"
"}\n"
""));
        loginButton = new QPushButton(Login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(270, 250, 93, 29));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        idLineEdit->setText(QCoreApplication::translate("Login", "id", nullptr));
        passwordLineEdit->setText(QCoreApplication::translate("Login", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
