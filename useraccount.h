#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <QObject>

typedef struct
{
    QString login;
    QString password;
    QString email;
} UserData;

class UserAccount : public QObject
{
    Q_OBJECT
public:
    UserAccount(QString login, QString password, QString email);
    UserAccount(UserData UserAccountData);
    QString getLogin() const;
    QString getPassword() const;
    QString getEmail() const;
    UserData getUsxerData() const;
private:
    UserData userAccountData;
};

#endif // USERACCOUNT_H
