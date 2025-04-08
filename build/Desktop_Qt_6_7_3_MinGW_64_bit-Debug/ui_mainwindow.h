/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QLabel *label_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QGroupBox *groupBox;
    QLineEdit *idInput;
    QLineEdit *typeInput;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_26;
    QPushButton *insertButton;
    QPushButton *pushButton_annuler;
    QLabel *label_28;
    QLineEdit *nomInput;
    QLabel *label_29;
    QDateEdit *dateEntInput;
    QComboBox *statPayInput;
    QDateEdit *dateSortieInput;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QTableView *tableView;
    QLineEdit *LineEdit_id_supprimer;
    QLabel *label_30;
    QPushButton *readButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1618, 765);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-30, 0, 2381, 1301));
        widget->setStyleSheet(QString::fromUtf8("background-color: #1D1D1D;\n"
""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(20, -10, 251, 1251));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
""));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(40, 160, 191, 491));
        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 80, 151, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral des boutons */\n"
"QPushButton {\n"
"    background-color: #2C2C2C;  /* Gris fonc\303\251 \303\251l\303\251gant */\n"
"    color: white;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    padding: 12px 20px;  /* Espacement interne */\n"
"    border-radius: 8px;  /* Coins arrondis */\n"
"    border: none;  /* Pas de bordure */\n"
"    text-align: left;  /* Alignement du texte */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"    transition: all 0.3s ease;  /* Animation fluide */\n"
"}\n"
"\n"
"/* Effet de survol (hover) */\n"
"QPushButton:hover {\n"
"    background-color: #2E8B57;  /* Vert \303\251l\303\251gant au survol */\n"
"    transform: scale(1.05);  /* Effet de zoom l\303\251ger */\n"
"    color: #FFFFFF;  /* Maintient le texte blanc */\n"
"}\n"
"\n"
"/* Effet de clic (pressed) */\n"
"QPushButton:pressed {\n"
"    background-color: #25994d;  /* Vert plus fonc\303\251 */\n"
"    transform: scale(0.95);  /* Effet de pression */\n"
"}\n"
"\n"
"/* S"
                        "tyle pour le bouton actif (s\303\251lectionn\303\251) */\n"
"QPushButton:checked, QPushButton:focus {\n"
"    background-color: #1E6F46;  /* Vert encore plus sombre */\n"
"    color: white;\n"
"    border-left: 5px solid #FFD700;  /* Petite barre dor\303\251e \303\240 gauche */\n"
"}\n"
""));
        pushButton_3 = new QPushButton(widget_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 150, 151, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral des boutons */\n"
"QPushButton {\n"
"    background-color: #2C2C2C;  /* Gris fonc\303\251 \303\251l\303\251gant */\n"
"    color: white;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    padding: 12px 20px;  /* Espacement interne */\n"
"    border-radius: 8px;  /* Coins arrondis */\n"
"    border: none;  /* Pas de bordure */\n"
"    text-align: left;  /* Alignement du texte */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"    transition: all 0.3s ease;  /* Animation fluide */\n"
"}\n"
"\n"
"/* Effet de survol (hover) */\n"
"QPushButton:hover {\n"
"    background-color: #2E8B57;  /* Vert \303\251l\303\251gant au survol */\n"
"    transform: scale(1.05);  /* Effet de zoom l\303\251ger */\n"
"    color: #FFFFFF;  /* Maintient le texte blanc */\n"
"}\n"
"\n"
"/* Effet de clic (pressed) */\n"
"QPushButton:pressed {\n"
"    background-color: #25994d;  /* Vert plus fonc\303\251 */\n"
"    transform: scale(0.95);  /* Effet de pression */\n"
"}\n"
"\n"
"/* S"
                        "tyle pour le bouton actif (s\303\251lectionn\303\251) */\n"
"QPushButton:checked, QPushButton:focus {\n"
"    background-color: #1E6F46;  /* Vert encore plus sombre */\n"
"    color: white;\n"
"    border-left: 5px solid #FFD700;  /* Petite barre dor\303\251e \303\240 gauche */\n"
"}\n"
""));
        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 220, 151, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral des boutons */\n"
"QPushButton {\n"
"    background-color: #2C2C2C;  /* Gris fonc\303\251 \303\251l\303\251gant */\n"
"    color: white;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    padding: 12px 20px;  /* Espacement interne */\n"
"    border-radius: 8px;  /* Coins arrondis */\n"
"    border: none;  /* Pas de bordure */\n"
"    text-align: left;  /* Alignement du texte */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"    transition: all 0.3s ease;  /* Animation fluide */\n"
"}\n"
"\n"
"/* Effet de survol (hover) */\n"
"QPushButton:hover {\n"
"    background-color: #2E8B57;  /* Vert \303\251l\303\251gant au survol */\n"
"    transform: scale(1.05);  /* Effet de zoom l\303\251ger */\n"
"    color: #FFFFFF;  /* Maintient le texte blanc */\n"
"}\n"
"\n"
"/* Effet de clic (pressed) */\n"
"QPushButton:pressed {\n"
"    background-color: #25994d;  /* Vert plus fonc\303\251 */\n"
"    transform: scale(0.95);  /* Effet de pression */\n"
"}\n"
"\n"
"/* S"
                        "tyle pour le bouton actif (s\303\251lectionn\303\251) */\n"
"QPushButton:checked, QPushButton:focus {\n"
"    background-color: #1E6F46;  /* Vert encore plus sombre */\n"
"    color: white;\n"
"    border-left: 5px solid #FFD700;  /* Petite barre dor\303\251e \303\240 gauche */\n"
"}\n"
""));
        pushButton_5 = new QPushButton(widget_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1, 291, 161, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral des boutons */\n"
"QPushButton {\n"
"    background-color: #2C2C2C;  /* Gris fonc\303\251 \303\251l\303\251gant */\n"
"    color: white;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    padding: 12px 20px;  /* Espacement interne */\n"
"    border-radius: 8px;  /* Coins arrondis */\n"
"    border: none;  /* Pas de bordure */\n"
"    text-align: left;  /* Alignement du texte */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"    transition: all 0.3s ease;  /* Animation fluide */\n"
"}\n"
"\n"
"/* Effet de survol (hover) */\n"
"QPushButton:hover {\n"
"    background-color: #2E8B57;  /* Vert \303\251l\303\251gant au survol */\n"
"    transform: scale(1.05);  /* Effet de zoom l\303\251ger */\n"
"    color: #FFFFFF;  /* Maintient le texte blanc */\n"
"}\n"
"\n"
"/* Effet de clic (pressed) */\n"
"QPushButton:pressed {\n"
"    background-color: #25994d;  /* Vert plus fonc\303\251 */\n"
"    transform: scale(0.95);  /* Effet de pression */\n"
"}\n"
"\n"
"/* S"
                        "tyle pour le bouton actif (s\303\251lectionn\303\251) */\n"
"QPushButton:checked, QPushButton:focus {\n"
"    background-color: #1E6F46;  /* Vert encore plus sombre */\n"
"    color: white;\n"
"    border-left: 5px solid #FFD700;  /* Petite barre dor\303\251e \303\240 gauche */\n"
"}\n"
""));
        pushButton_6 = new QPushButton(widget_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 361, 151, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral des boutons */\n"
"QPushButton {\n"
"    background-color: #2C2C2C;  /* Gris fonc\303\251 \303\251l\303\251gant */\n"
"    color: white;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    padding: 12px 20px;  /* Espacement interne */\n"
"    border-radius: 8px;  /* Coins arrondis */\n"
"    border: none;  /* Pas de bordure */\n"
"    text-align: left;  /* Alignement du texte */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"    transition: all 0.3s ease;  /* Animation fluide */\n"
"}\n"
"\n"
"/* Effet de survol (hover) */\n"
"QPushButton:hover {\n"
"    background-color: #2E8B57;  /* Vert \303\251l\303\251gant au survol */\n"
"    transform: scale(1.05);  /* Effet de zoom l\303\251ger */\n"
"    color: #FFFFFF;  /* Maintient le texte blanc */\n"
"}\n"
"\n"
"/* Effet de clic (pressed) */\n"
"QPushButton:pressed {\n"
"    background-color: #25994d;  /* Vert plus fonc\303\251 */\n"
"    transform: scale(0.95);  /* Effet de pression */\n"
"}\n"
"\n"
"/* S"
                        "tyle pour le bouton actif (s\303\251lectionn\303\251) */\n"
"QPushButton:checked, QPushButton:focus {\n"
"    background-color: #1E6F46;  /* Vert encore plus sombre */\n"
"    color: white;\n"
"    border-left: 5px solid #FFD700;  /* Petite barre dor\303\251e \303\240 gauche */\n"
"}\n"
""));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 10, 151, 41));
        pushButton->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral des boutons */\n"
"QPushButton {\n"
"    background-color: #2C2C2C;  /* Gris fonc\303\251 \303\251l\303\251gant */\n"
"    color: white;  /* Texte blanc */\n"
"    font-size: 16px;  /* Taille du texte */\n"
"    padding: 12px 20px;  /* Espacement interne */\n"
"    border-radius: 8px;  /* Coins arrondis */\n"
"    border: none;  /* Pas de bordure */\n"
"    text-align: left;  /* Alignement du texte */\n"
"    font-weight: bold;  /* Texte en gras */\n"
"    transition: all 0.3s ease;  /* Animation fluide */\n"
"}\n"
"\n"
"/* Effet de survol (hover) */\n"
"QPushButton:hover {\n"
"    background-color: #2E8B57;  /* Vert \303\251l\303\251gant au survol */\n"
"    transform: scale(1.05);  /* Effet de zoom l\303\251ger */\n"
"    color: #FFFFFF;  /* Maintient le texte blanc */\n"
"}\n"
"\n"
"/* Effet de clic (pressed) */\n"
"QPushButton:pressed {\n"
"    background-color: #25994d;  /* Vert plus fonc\303\251 */\n"
"    transform: scale(0.95);  /* Effet de pression */\n"
"}\n"
"\n"
"/* S"
                        "tyle pour le bouton actif (s\303\251lectionn\303\251) */\n"
"QPushButton:checked, QPushButton:focus {\n"
"    background-color: #1E6F46;  /* Vert encore plus sombre */\n"
"    color: white;\n"
"    border-left: 5px solid #FFD700;  /* Petite barre dor\303\251e \303\240 gauche */\n"
"}\n"
""));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 40, 81, 81));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/logoc++1.png")));
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(990, 120, 181, 31));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(680, 20, 801, 141));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: #8A4FFF;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 20px 15px;\n"
"    font-size: 35px;\n"
"    font-weight: bold;"));
        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(840, 270, 261, 39));
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color:  #2C2C2C;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"  "));
        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(1120, 270, 161, 39));
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color: white;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"   font-weight: bold;\n"
"  "));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(740, 270, 81, 41));
        comboBox->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color: white;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"   font-weight: bold;"));
        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(1300, 270, 171, 41));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color: white;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"   font-weight: bold;"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(290, 80, 311, 621));
        groupBox->setMouseTracking(true);
        groupBox->setTabletTracking(true);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #2C2C2C;\n"
"padding: 10px;\n"
"border-radius: 10px;"));
        idInput = new QLineEdit(groupBox);
        idInput->setObjectName("idInput");
        idInput->setGeometry(QRect(140, 100, 160, 41));
        idInput->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color:  #2C2C2C;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"  "));
        typeInput = new QLineEdit(groupBox);
        typeInput->setObjectName("typeInput");
        typeInput->setGeometry(QRect(140, 160, 160, 41));
        typeInput->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color:  #2C2C2C;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"  \n"
""));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(0, 90, 141, 64));
        label_20->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(-10, 140, 141, 63));
        label_21->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;"));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(-10, 200, 121, 64));
        label_22->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(-10, 260, 151, 63));
        label_23->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;"));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(-10, 320, 151, 64));
        label_26->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;"));
        insertButton = new QPushButton(groupBox);
        insertButton->setObjectName("insertButton");
        insertButton->setGeometry(QRect(120, 570, 84, 39));
        insertButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        pushButton_annuler = new QPushButton(groupBox);
        pushButton_annuler->setObjectName("pushButton_annuler");
        pushButton_annuler->setGeometry(QRect(210, 570, 82, 39));
        pushButton_annuler->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        label_28 = new QLabel(groupBox);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(0, 20, 228, 61));
        label_28->setStyleSheet(QString::fromUtf8(" font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #8B008B;\n"
"    padding: 10px;"));
        nomInput = new QLineEdit(groupBox);
        nomInput->setObjectName("nomInput");
        nomInput->setGeometry(QRect(140, 340, 160, 41));
        nomInput->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color:  #2C2C2C;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"  \n"
""));
        label_29 = new QLabel(groupBox);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(-10, 390, 121, 51));
        label_29->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;"));
        dateEntInput = new QDateEdit(groupBox);
        dateEntInput->setObjectName("dateEntInput");
        dateEntInput->setGeometry(QRect(150, 220, 131, 41));
        statPayInput = new QComboBox(groupBox);
        statPayInput->addItem(QString());
        statPayInput->addItem(QString());
        statPayInput->setObjectName("statPayInput");
        statPayInput->setGeometry(QRect(160, 270, 82, 41));
        dateSortieInput = new QDateEdit(groupBox);
        dateSortieInput->setObjectName("dateSortieInput");
        dateSortieInput->setGeometry(QRect(130, 400, 110, 41));
        updateButton = new QPushButton(widget);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(880, 660, 101, 39));
        updateButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(1000, 660, 101, 39));
        deleteButton->setStyleSheet(QString::fromUtf8("background-color: #8B008B;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(640, 380, 961, 231));
        tableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"     padding: 10px;\n"
"    border: 1px solid   #FFFFFF; /* Bordure des cellules */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
" background-color: #FFFFFF; /* Fond gris fonc\303\251 pour la table */\n"
"    color: #FFFFFF; /* Texte en blanc */\n"
"    border: 1px solid  #8A2BE2; /* Bordure de la table */\n"
"}"));
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::PenStyle::DotLine);
        LineEdit_id_supprimer = new QLineEdit(widget);
        LineEdit_id_supprimer->setObjectName("LineEdit_id_supprimer");
        LineEdit_id_supprimer->setGeometry(QRect(700, 660, 160, 41));
        LineEdit_id_supprimer->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color:  #2C2C2C;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"  "));
        label_30 = new QLabel(widget);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(630, 320, 228, 51));
        label_30->setStyleSheet(QString::fromUtf8(" font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #8B008B;\n"
"    padding: 10px;"));
        readButton = new QPushButton(widget);
        readButton->setObjectName("readButton");
        readButton->setGeometry(QRect(630, 190, 151, 51));
        readButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        pushButton_11->raise();
        widget_2->raise();
        pushButton_9->raise();
        pushButton_14->raise();
        pushButton_16->raise();
        comboBox->raise();
        comboBox_2->raise();
        groupBox->raise();
        updateButton->raise();
        deleteButton->raise();
        tableView->raise();
        LineEdit_id_supprimer->raise();
        label_30->raise();
        readButton->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1618, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(statustip)
        widget->setStatusTip(QCoreApplication::translate("MainWindow", "QTableWidget {     background-color: #2C2C2C; /* Fond gris fonc\303\251 pour la table */     color: #FFFFFF; /* Texte en blanc */     border: 1px solid #444444; /* Bordure de la table */ }  QTableWidget::item {     padding: 10px;     border: 1px solid #333333; /* Bordure des cellules */ }  QTableWidget::item:hover {     background-color: #444444; /* Couleur de fond lors du survol */ }  QTableWidget::item:selected {     background-color: #2E8B57; /* Couleur de fond quand la cellule est s\303\251lectionn\303\251e */     color: white; /* Couleur du texte s\303\251lectionn\303\251 */ }  QTableWidget::item:selected:hover {     background-color: #1D6B44; /* Couleur de fond lors du survol de la cellule s\303\251lectionn\303\251e */ } ", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\360\237\217\254 Magasins", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", " \360\237\221\245 Locataires", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\360\237\224\222 Securit\303\251", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\360\237\216\211 Evenements", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\360\237\232\266\342\200\215\342\231\202\357\270\217 Visiteurs", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\360\237\221\251\342\200\215\360\237\222\274 Employ\303\251s", nullptr));
        label_6->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Get started", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Welcome to CenterFlow", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Rechercher                              \360\237\224\216", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Trier par nom", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Id", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "croissant", nullptr));

        groupBox->setTitle(QString());
        idInput->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "ID du locataire	", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Type de locataire	", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Date d\342\200\231entr\303\251e	", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Statut de paiement	", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Nom du locataire	", nullptr));
        insertButton->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_annuler->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Ajouter un Locataire", nullptr));
        nomInput->setText(QCoreApplication::translate("MainWindow", "\302\262", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Date de sortie	", nullptr));
        statPayInput->setItemText(0, QCoreApplication::translate("MainWindow", "pay\303\251", nullptr));
        statPayInput->setItemText(1, QCoreApplication::translate("MainWindow", "Non Pay\303\251", nullptr));

        updateButton->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Listes des Locataires", nullptr));
        readButton->setText(QCoreApplication::translate("MainWindow", "afficher les locataires", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
