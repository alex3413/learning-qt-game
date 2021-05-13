#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMessageBox>
#include "registration.h"
#include "gamemenu.h"
#include "mainwindow.h"

namespace Ui {
class LogIn;
}

class LogIn : public QDialog
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = nullptr);
    ~LogIn();

private slots:
    void on_Ent_clicked();

    void on_reg_clicked();

private:
    Ui::LogIn *ui;
};

#endif // LOGIN_H
