#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "useraccount.h"

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(UserAccount *account, QWidget *parent = nullptr);
    ~SignUp();

private:
    Ui::SignUp *ui;
    UserAccount *account;
};

#endif // SIGNUP_H
