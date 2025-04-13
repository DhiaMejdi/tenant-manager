#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Login;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_loginButton_clicked();  // Slot for the login button

private:
    Ui::Login *ui;
};

#endif // DIALOG_H
