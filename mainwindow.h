#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QLabel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QtCharts>
#include <QBarSet>
#include <QBarSeries>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QChartView>
#include <QPixmap>
#include <QImage>
#include <QDebug>
#include <qrcodegen.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void generateQRCodeFromLocataire(int index);
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onInsert();
    void onRead();
    void onUpdate();
    void onDelete();
    void onSort();
    void exportPlayerListToPDF();
    void displayTenantStats();
    void rechercherParId();
    void calculerEtAfficherJoursRestants();
    void generateQRCodeFromLocataire();
    void openAddAdminDialog();
    void onSortByEntryDate();
    void trierParDateSortie();

private:
    Ui::MainWindow *ui;
    void setupUI();
};

#endif // MAINWINDOW_H
