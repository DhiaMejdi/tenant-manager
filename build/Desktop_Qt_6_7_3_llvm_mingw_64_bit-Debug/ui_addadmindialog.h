/********************************************************************************
** Form generated from reading UI file 'addadmindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDADMINDIALOG_H
#define UI_ADDADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddAdminDialog
{
public:
    QDialogButtonBox *xx;
    QLineEdit *idInput;
    QLineEdit *passwordInput;
    QLineEdit *confirmPasswordInput;
    QPushButton *submitButton;

    void setupUi(QDialog *AddAdminDialog)
    {
        if (AddAdminDialog->objectName().isEmpty())
            AddAdminDialog->setObjectName("AddAdminDialog");
        AddAdminDialog->resize(400, 300);
        AddAdminDialog->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral de la fen\303\252tre */\n"
"QDialog {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 #a18cd1, stop:1 #fbc2eb);\n"
"    border-radius: 12px;\n"
"    padding: 20px;\n"
"}\n"
"\n"
"/* Style des labels */\n"
"QLabel {\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Style des champs de texte */\n"
"QLineEdit {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #a18cd1;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #fbc2eb;\n"
"    box-shadow: 0 0 6px rgba(255, 255, 255, 0.5);\n"
"}\n"
"\n"
"/* Style du bouton Ajouter */\n"
"QPushButton {\n"
"    background-color: #6a3093;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    margin-top: 10px;\n"
"}\n"
""
                        "\n"
"QPushButton:hover {\n"
"    background-color: #a044ff;\n"
"    transform: scale(1.05);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5a2d84;\n"
"}\n"
"\n"
"/* Ajoute une ombre port\303\251e l\303\251g\303\250re */\n"
"QDialog, QLineEdit, QPushButton {\n"
"    box-shadow: 0 4px 10px rgba(0, 0, 0, 0.15);\n"
"}\n"
"\n"
""));
        xx = new QDialogButtonBox(AddAdminDialog);
        xx->setObjectName("xx");
        xx->setGeometry(QRect(30, 231, 341, 41));
        xx->setOrientation(Qt::Orientation::Horizontal);
        xx->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        idInput = new QLineEdit(AddAdminDialog);
        idInput->setObjectName("idInput");
        idInput->setGeometry(QRect(180, 50, 113, 26));
        idInput->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral de la fen\303\252tre */\n"
"QDialog {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 #a18cd1, stop:1 #fbc2eb);\n"
"    border-radius: 12px;\n"
"    padding: 20px;\n"
"}\n"
"\n"
"/* Style des labels */\n"
"QLabel {\n"
"    color: #ffffff;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Style des champs de texte */\n"
"QLineEdit {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #a18cd1;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #fbc2eb;\n"
"    box-shadow: 0 0 6px rgba(255, 255, 255, 0.5);\n"
"}\n"
"\n"
"/* Style du bouton Ajouter */\n"
"QPushButton {\n"
"    background-color: #6a3093;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    padding: 10px 20px;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    margin-top: 10px;\n"
"}\n"
""
                        "\n"
"QPushButton:hover {\n"
"    background-color: #a044ff;\n"
"    transform: scale(1.05);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5a2d84;\n"
"}\n"
"\n"
"/* Ajoute une ombre port\303\251e l\303\251g\303\250re */\n"
"QDialog, QLineEdit, QPushButton {\n"
"    box-shadow: 0 4px 10px rgba(0, 0, 0, 0.15);\n"
"}\n"
""));
        passwordInput = new QLineEdit(AddAdminDialog);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(180, 110, 113, 26));
        confirmPasswordInput = new QLineEdit(AddAdminDialog);
        confirmPasswordInput->setObjectName("confirmPasswordInput");
        confirmPasswordInput->setGeometry(QRect(180, 170, 113, 26));
        submitButton = new QPushButton(AddAdminDialog);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(30, 200, 181, 41));
        submitButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));

        retranslateUi(AddAdminDialog);
        QObject::connect(xx, &QDialogButtonBox::accepted, AddAdminDialog, qOverload<>(&QDialog::accept));
        QObject::connect(xx, &QDialogButtonBox::rejected, AddAdminDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddAdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AddAdminDialog)
    {
        AddAdminDialog->setWindowTitle(QCoreApplication::translate("AddAdminDialog", "Dialog", nullptr));
        submitButton->setText(QCoreApplication::translate("AddAdminDialog", "afficher les locataires", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAdminDialog: public Ui_AddAdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDADMINDIALOG_H
