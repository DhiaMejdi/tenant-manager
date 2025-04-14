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
    QPushButton *pushButton_11;
    QPushButton *exportButton;
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
    QPushButton *readButton;
    QPushButton *displayStatsButton;
    QPushButton *sortButton;
    QLineEdit *idSearchInput;
    QPushButton *searchButton;
    QPushButton *joursRestantsButton;
    QLabel *qrCodeLabel;
    QPushButton *generateQRCodeButton;
    QGroupBox *groupBox_2;
    QPushButton *insertButton_3;
    QPushButton *pushButton_annuler_3;
    QPushButton *updateButton_3;
    QLabel *label_30;
    QPushButton *addAdminButton;
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
        widget->setGeometry(QRect(-210, -10, 1761, 1231));
        widget->setStyleSheet(QString::fromUtf8("/* General QWidget styling with animated background */\n"
"QWidget {\n"
"    background: linear-gradient(45deg, #6A4CFC, #9C6EFC);\n"
"    background-size: 400% 400%; /* Large background size for animation */\n"
"    animation: gradientAnimation 15s ease infinite; /* Apply the animation */\n"
"    color: #FFF; /* White text */\n"
"    border-radius: 15px; /* Rounded corners */\n"
"    padding: 20px;\n"
"    font-family: 'Roboto', sans-serif;\n"
"    font-size: 14px;\n"
"    transition: all 0.3s ease-in-out; /* Smooth transition for hover effects */\n"
"}\n"
"\n"
"/* Background gradient animation keyframes */\n"
"@keyframes gradientAnimation {\n"
"    0% {\n"
"        background-position: 0% 50%; /* Start from the left */\n"
"    }\n"
"    50% {\n"
"        background-position: 100% 50%; /* Move to the right */\n"
"    }\n"
"    100% {\n"
"        background-position: 0% 50%; /* Return to the start */\n"
"    }\n"
"}\n"
"\n"
"/* Hover effect for QWidget */\n"
"QWidget:hover {\n"
"    background: #5A2D84; /* Lig"
                        "hter purple when hovering */\n"
"}\n"
"\n"
"/* QLabel Styling */\n"
"QLabel {\n"
"    color: #E2B0FF; /* Light purple text for a futuristic feel */\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 15px;\n"
"    text-shadow: 0 0 8px rgba(226, 176, 255, 0.6); /* Soft purple glow */\n"
"}\n"
"\n"
"/* QPushButton with smooth hover effect */\n"
"QPushButton {\n"
"    background: linear-gradient(45deg, #6A4CFC, #9C6EFC); /* Purple gradient button */\n"
"    border: 2px solid #9C6EFC; /* Soft border with light purple */\n"
"    color: #FFF; /* White text */\n"
"    border-radius: 12px;\n"
"    padding: 12px 30px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase;\n"
"    transition: all 0.3s ease-in-out;\n"
"    box-shadow: 0 0 15px rgba(106, 76, 252, 0.6); /* Subtle glowing effect */\n"
"}\n"
"\n"
"/* Hover effect for QPushButton */\n"
"QPushButton:hover {\n"
"    background: linear-gradient(45deg, #9C6EFC, #6A4CFC); /* Reverse gradient for hover */\n"
" "
                        "   border-color: #6A4CFC;\n"
"    box-shadow: 0 0 20px rgba(106, 76, 252, 0.8); /* Stronger glow on hover */\n"
"    transform: scale(1.05); /* Slight scale-up for hover effect */\n"
"}\n"
"\n"
"/* Pressed effect for QPushButton */\n"
"QPushButton:pressed {\n"
"    background: #6A4CFC; /* Dark purple when pressed */\n"
"    box-shadow: 0 0 10px rgba(106, 76, 252, 0.8); /* Still glowing effect */\n"
"    transform: scale(0.98); /* Slight scale-down */\n"
"}\n"
"\n"
"/* QLineEdit with purple border focus */\n"
"QLineEdit {\n"
"    background-color: #3A1D6A; /* Dark purple background */\n"
"    border: 2px solid #6A4CFC;\n"
"    color: #FFF; /* White text */\n"
"    border-radius: 8px;\n"
"    padding: 12px;\n"
"    font-size: 14px;\n"
"    transition: all 0.3s ease;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #9C6EFC; /* Lighter purple when focused */\n"
"    box-shadow: 0 0 10px rgba(156, 110, 252, 0.7); /* Soft purple glow */\n"
"}\n"
"\n"
"/* QComboBox */\n"
"QComboBox {\n"
"    background-color: #"
                        "3A1D6A; /* Dark purple background */\n"
"    border: 2px solid #6A4CFC;\n"
"    color: #FFF;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    transition: all 0.3s ease;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: #9C6EFC; /* Lighter border color on hover */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border-color: #9C6EFC;\n"
"    box-shadow: 0 0 10px rgba(156, 110, 252, 0.7); /* Focus effect with purple glow */\n"
"}\n"
"\n"
"/* QTableView with purple and neon accents */\n"
"\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #6A4CFC; /* Purple header background */\n"
"    color: #FFF;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"    border: 1px solid #6A4CFC; /* Dark purple border for headers */\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"/* Hover effect for table rows */\n"
"QTableView::item:hover {\n"
"    background-color: #9C6EFC; /* Lighter purple when hovering over a row */\n"
"    color: #181818; /"
                        "* Darker text when hovered */\n"
"}\n"
"\n"
"\n"
"\n"
"/* Scrollbar design with a futuristic purple look */\n"
"QScrollBar:vertical, QScrollBar:horizontal {\n"
"    background: #2E1A47; /* Dark background for scrollbar */\n"
"    width: 12px;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background: #6A4CFC; /* Purple scrollbar handle */\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover, QScrollBar::handle:horizontal:hover {\n"
"    background: #9C6EFC; /* Lighter purple on hover */\n"
"}\n"
"\n"
"/* QLabel for displaying the QR code or any other label */\n"
"QLabel {\n"
"    color: #E2B0FF; /* Light purple text */\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    text-shadow: 0 0 10px rgba(226, 176, 255, 0.6); /* Glowing effect */\n"
"}\n"
"QTableView {\n"
"    background-color: #2E1A47; /* Dark background for the table */\n"
"    border: 2px solid #6A4CFC; /* Dark purple border around the table */\n"
"    c"
                        "olor: #FFF; /* White text */\n"
"    font-size: 14px;\n"
"    font-family: 'Roboto', sans-serif;\n"
"    border-radius: 10px;\n"
"    alternate-background-color: #3A1D6A; /* Slightly lighter alternate rows */\n"
"}"));
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
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/logoc++1.png")));
        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(650, 20, 801, 141));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: #8A4FFF;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 20px 15px;\n"
"    font-size: 35px;\n"
"    font-weight: bold;"));
        exportButton = new QPushButton(widget);
        exportButton->setObjectName("exportButton");
        exportButton->setGeometry(QRect(1410, 620, 191, 51));
        exportButton->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color: white;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"   font-weight: bold;\n"
"  "));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(290, 80, 341, 621));
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
        label_20->setGeometry(QRect(-10, 90, 141, 64));
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
        label_26->setGeometry(QRect(0, 330, 151, 64));
        label_26->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;"));
        insertButton = new QPushButton(groupBox);
        insertButton->setObjectName("insertButton");
        insertButton->setGeometry(QRect(110, 570, 101, 39));
        insertButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        pushButton_annuler = new QPushButton(groupBox);
        pushButton_annuler->setObjectName("pushButton_annuler");
        pushButton_annuler->setGeometry(QRect(220, 570, 111, 39));
        pushButton_annuler->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        label_28 = new QLabel(groupBox);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(0, 20, 241, 61));
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
        label_29->setGeometry(QRect(0, 400, 121, 51));
        label_29->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;"));
        dateEntInput = new QDateEdit(groupBox);
        dateEntInput->setObjectName("dateEntInput");
        dateEntInput->setGeometry(QRect(140, 220, 161, 41));
        dateEntInput->setStyleSheet(QString::fromUtf8("/* Style for QDateEdit with Purple Gradient */\n"
"QDateEdit {\n"
"    border: 2px solid #9C27B0;  /* Purple border */\n"
"    border-radius: 10px;  /* Rounded corners */\n"
"    padding: 5px 10px;  /* Padding inside the input box */\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #9C27B0, stop:1 #673AB7);  /* Gradient from light purple to dark purple */\n"
"    color: white;  /* White text color */\n"
"    font-size: 14px;  /* Font size for the date */\n"
"    selection-background-color: #D500F9;  /* Bright purple highlight when text is selected */\n"
"}\n"
"\n"
"/* Style for the date popup calendar (if used) */\n"
"QCalendarWidget {\n"
"    background-color: #673AB7;  /* Dark purple background for the calendar */\n"
"    border: 1px solid #9C27B0;  /* Lighter purple border for the calendar */\n"
"    border-radius: 10px;  /* Rounded corners for the calendar */\n"
"}\n"
"\n"
"QCalendarWidget QToolButton {\n"
"    background-color: #9C27B0;  /* Purple background for calendar butt"
                        "ons */\n"
"    color: white;  /* White text for buttons */\n"
"    border-radius: 5px;  /* Rounded corners for the buttons */\n"
"}\n"
"\n"
"QCalendarWidget QToolButton:hover {\n"
"    background-color: #7B1FA2;  /* Darker purple when hovering */\n"
"}\n"
"\n"
"/* Style for the calendar date cells */\n"
"QCalendarWidget QAbstractItemView:enabled {\n"
"    color: white;  /* White text color for the dates */\n"
"    background-color: #9C27B0;  /* Light purple background for date cells */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:selected {\n"
"    background-color: #D500F9;  /* Bright purple background for selected date */\n"
"    color: white;  /* White text when selected */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:disabled {\n"
"    color: #B39DDB;  /* Light grey text for disabled cells */\n"
"    background-color: #673AB7;  /* Dark purple for disabled cells */\n"
"}\n"
""));
        statPayInput = new QComboBox(groupBox);
        statPayInput->addItem(QString());
        statPayInput->addItem(QString());
        statPayInput->setObjectName("statPayInput");
        statPayInput->setGeometry(QRect(140, 270, 161, 41));
        statPayInput->setStyleSheet(QString::fromUtf8("/* General QComboBox styling */\n"
"QComboBox {\n"
"    background-color: #5E35B1;  /* Dark purple background */\n"
"    color: white;  /* White text color */\n"
"    border: 1px solid #8E24AA;  /* Lighter purple border */\n"
"    border-radius: 12px;  /* Rounded corners */\n"
"    padding: 8px;  /* Padding inside the combo box */\n"
"    font-size: 16px;  /* Set the font size */\n"
"}\n"
"\n"
"/* QComboBox when it is focused (when clicked or selected) */\n"
"QComboBox:focus {\n"
"    border: 1px solid #9C27B0;  /* Purple color when focused */\n"
"    background-color: #7E57C2;  /* Lighter purple background when focused */\n"
"}\n"
"\n"
"/* QComboBox drop-down button (the arrow) */\n"
"QComboBox::drop-down {\n"
"    border: none;  /* Remove the border */\n"
"    background-color: transparent;  /* Transparent background */\n"
"    width: 30px;  /* Set width for the drop-down button */\n"
"}\n"
"\n"
"/* QComboBox button when hovered */\n"
"QComboBox::drop-down:hover {\n"
"    background-color: #AB47BC;  /* Sligh"
                        "tly brighter purple for hover effect */\n"
"}\n"
"\n"
"/* The combo box popup (the list) */\n"
"QListView {\n"
"    background-color: #7E57C2;  /* Lighter purple for the dropdown list */\n"
"    color: white;  /* White text in the list */\n"
"    border-radius: 8px;  /* Rounded corners for the dropdown list */\n"
"}\n"
"\n"
"/* When an item in the dropdown list is hovered */\n"
"QListView::item:hover {\n"
"    background-color: #9C27B0;  /* Lighter purple for hovered item */\n"
"    border-radius: 8px;  /* Rounded corners for hovered item */\n"
"}\n"
"\n"
"/* Style for the selected item in the dropdown list */\n"
"QListView::item:selected {\n"
"    background-color: #AB47BC;  /* Even brighter purple for selected item */\n"
"}\n"
"\n"
"/* Disabled state for the combo box */\n"
"QComboBox:disabled {\n"
"    background-color: #B39DDB;  /* Lighter background when disabled */\n"
"    border: 1px solid #D1C4E9;  /* Light border when disabled */\n"
"    color: #9E9E9E;  /* Light gray text when disabled */\n"
"}\n"
"\n"
""
                        "/* Optional: smooth transition for combo box focus effect */\n"
"QComboBox {\n"
"    transition: background-color 0.3s ease, border-color 0.3s ease;\n"
"}\n"
""));
        dateSortieInput = new QDateEdit(groupBox);
        dateSortieInput->setObjectName("dateSortieInput");
        dateSortieInput->setGeometry(QRect(140, 400, 161, 41));
        dateSortieInput->setStyleSheet(QString::fromUtf8("/* Style for QDateEdit with Purple Gradient */\n"
"QDateEdit {\n"
"    border: 2px solid #9C27B0;  /* Purple border */\n"
"    border-radius: 10px;  /* Rounded corners */\n"
"    padding: 5px 10px;  /* Padding inside the input box */\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #9C27B0, stop:1 #673AB7);  /* Gradient from light purple to dark purple */\n"
"    color: white;  /* White text color */\n"
"    font-size: 14px;  /* Font size for the date */\n"
"    selection-background-color: #D500F9;  /* Bright purple highlight when text is selected */\n"
"}\n"
"\n"
"/* Style for the date popup calendar (if used) */\n"
"QCalendarWidget {\n"
"    background-color: #673AB7;  /* Dark purple background for the calendar */\n"
"    border: 1px solid #9C27B0;  /* Lighter purple border for the calendar */\n"
"    border-radius: 10px;  /* Rounded corners for the calendar */\n"
"}\n"
"\n"
"QCalendarWidget QToolButton {\n"
"    background-color: #9C27B0;  /* Purple background for calendar butt"
                        "ons */\n"
"    color: white;  /* White text for buttons */\n"
"    border-radius: 5px;  /* Rounded corners for the buttons */\n"
"}\n"
"\n"
"QCalendarWidget QToolButton:hover {\n"
"    background-color: #7B1FA2;  /* Darker purple when hovering */\n"
"}\n"
"\n"
"/* Style for the calendar date cells */\n"
"QCalendarWidget QAbstractItemView:enabled {\n"
"    color: white;  /* White text color for the dates */\n"
"    background-color: #9C27B0;  /* Light purple background for date cells */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:selected {\n"
"    background-color: #D500F9;  /* Bright purple background for selected date */\n"
"    color: white;  /* White text when selected */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:disabled {\n"
"    color: #B39DDB;  /* Light grey text for disabled cells */\n"
"    background-color: #673AB7;  /* Dark purple for disabled cells */\n"
"}\n"
""));
        updateButton = new QPushButton(groupBox);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(10, 570, 91, 39));
        updateButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 12px;\n"
"    font-weight: bold;"));
        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(810, 660, 141, 39));
        deleteButton->setStyleSheet(QString::fromUtf8("background-color: #8B008B;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(640, 380, 1031, 231));
        tableView->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: #6A4CFC;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
""));
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::PenStyle::DotLine);
        LineEdit_id_supprimer = new QLineEdit(widget);
        LineEdit_id_supprimer->setObjectName("LineEdit_id_supprimer");
        LineEdit_id_supprimer->setGeometry(QRect(640, 660, 160, 41));
        LineEdit_id_supprimer->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color:  #2C2C2C;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"  "));
        readButton = new QPushButton(widget);
        readButton->setObjectName("readButton");
        readButton->setGeometry(QRect(1000, 620, 251, 51));
        readButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        displayStatsButton = new QPushButton(widget);
        displayStatsButton->setObjectName("displayStatsButton");
        displayStatsButton->setGeometry(QRect(1420, 330, 171, 41));
        displayStatsButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        sortButton = new QPushButton(widget);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(1240, 330, 171, 41));
        sortButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        idSearchInput = new QLineEdit(widget);
        idSearchInput->setObjectName("idSearchInput");
        idSearchInput->setGeometry(QRect(940, 180, 271, 41));
        idSearchInput->setStyleSheet(QString::fromUtf8("background-color:  #444444;\n"
"    color:  #2C2C2C;\n"
"    border: 2px solid #8A2BE2;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 15px;\n"
"  "));
        searchButton = new QPushButton(widget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(1220, 180, 171, 41));
        searchButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        joursRestantsButton = new QPushButton(widget);
        joursRestantsButton->setObjectName("joursRestantsButton");
        joursRestantsButton->setGeometry(QRect(980, 330, 251, 41));
        joursRestantsButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        qrCodeLabel = new QLabel(widget);
        qrCodeLabel->setObjectName("qrCodeLabel");
        qrCodeLabel->setGeometry(QRect(1460, 10, 184, 199));
        qrCodeLabel->setStyleSheet(QString::fromUtf8("/* Styling for the QR Code label */\n"
"QLabel#qrCodeLabel {\n"
"    background: linear-gradient(135deg, #9C27B0, #7C4DFF); /* Purple gradient */\n"
"    border-radius: 15px;  /* Rounded corners for the label */\n"
"    padding: 10px;  /* Padding inside the label to prevent content from touching edges */\n"
"    border: 2px solid #8E24AA; /* Lighter purple border around the label */\n"
"    min-width: 160px;  /* Ensure label has a minimum width */\n"
"    min-height: 160px;  /* Ensure label has a minimum height */\n"
"    display: flex;\n"
"    justify-content: center;\n"
"    align-items: center;\n"
"}\n"
"\n"
"/* When the label is hovered over (optional, for interactivity) */\n"
"QLabel#qrCodeLabel:hover {\n"
"    background: linear-gradient(135deg, #7C4DFF, #9C27B0); /* Reverse the gradient on hover */\n"
"    border: 2px solid #AB47BC; /* Brighter border when hovered */\n"
"}\n"
"\n"
"/* When the label is focused (optional, if applicable) */\n"
"QLabel#qrCodeLabel:focus {\n"
"    border: 2px solid #AB47BC;"
                        "  /* Bright purple border when focused */\n"
"}\n"
"\n"
"/* Styling for the text inside the label (optional, in case you want to show text) */\n"
"QLabel#qrCodeLabel:empty {\n"
"    color: #FFFFFF;  /* White text when label is empty (if*\n"
""));
        generateQRCodeButton = new QPushButton(widget);
        generateQRCodeButton->setObjectName("generateQRCodeButton");
        generateQRCodeButton->setGeometry(QRect(1510, 200, 84, 39));
        generateQRCodeButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(640, 330, 241, 41));
        groupBox_2->setMouseTracking(true);
        groupBox_2->setTabletTracking(true);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #2C2C2C;\n"
"padding: 10px;\n"
"border-radius: 10px;"));
        insertButton_3 = new QPushButton(groupBox_2);
        insertButton_3->setObjectName("insertButton_3");
        insertButton_3->setGeometry(QRect(120, 570, 84, 39));
        insertButton_3->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        pushButton_annuler_3 = new QPushButton(groupBox_2);
        pushButton_annuler_3->setObjectName("pushButton_annuler_3");
        pushButton_annuler_3->setGeometry(QRect(210, 570, 82, 39));
        pushButton_annuler_3->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        updateButton_3 = new QPushButton(groupBox_2);
        updateButton_3->setObjectName("updateButton_3");
        updateButton_3->setGeometry(QRect(10, 570, 101, 39));
        updateButton_3->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;"));
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(0, 0, 241, 51));
        label_30->setStyleSheet(QString::fromUtf8(" font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #8B008B;\n"
"    padding: 10px;"));
        addAdminButton = new QPushButton(widget);
        addAdminButton->setObjectName("addAdminButton");
        addAdminButton->setGeometry(QRect(1630, 680, 121, 31));
        addAdminButton->setStyleSheet(QString::fromUtf8("background-color: #8A2BE2;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 15px;\n"
"    font-size: 8px;\n"
"    font-weight: bold;"));
        pushButton_11->raise();
        widget_2->raise();
        exportButton->raise();
        groupBox->raise();
        deleteButton->raise();
        tableView->raise();
        LineEdit_id_supprimer->raise();
        readButton->raise();
        displayStatsButton->raise();
        sortButton->raise();
        idSearchInput->raise();
        searchButton->raise();
        joursRestantsButton->raise();
        qrCodeLabel->raise();
        generateQRCodeButton->raise();
        groupBox_2->raise();
        addAdminButton->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1618, 26));
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
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Welcome to CenterFlow", nullptr));
        exportButton->setText(QCoreApplication::translate("MainWindow", "exporter en PDF", nullptr));
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
        readButton->setText(QCoreApplication::translate("MainWindow", "afficher les locataires", nullptr));
        displayStatsButton->setText(QCoreApplication::translate("MainWindow", "statistiques", nullptr));
        sortButton->setText(QCoreApplication::translate("MainWindow", "Trie", nullptr));
        idSearchInput->setText(QString());
        searchButton->setText(QCoreApplication::translate("MainWindow", "chercher", nullptr));
        joursRestantsButton->setText(QCoreApplication::translate("MainWindow", "nombre de jours restant", nullptr));
        qrCodeLabel->setText(QCoreApplication::translate("MainWindow", "QR", nullptr));
        generateQRCodeButton->setText(QCoreApplication::translate("MainWindow", "QR", nullptr));
        groupBox_2->setTitle(QString());
        insertButton_3->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_annuler_3->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        updateButton_3->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Listes des Locataires", nullptr));
        addAdminButton->setText(QCoreApplication::translate("MainWindow", "Ajouter un admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
