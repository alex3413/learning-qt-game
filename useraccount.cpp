#include "useraccount.h"

UserAccount::UserAccount(QString login, QString password, QString email)
{
    userAccountData.login = login;
    userAccountData.password = password;
    userAccountData.email = email;
}

UserAccount::UserAccount(UserData UserAccountData) : userAccountData(UserAccountData) {}

QString UserAccount::getLogin() const
{
    return userAccountData.login;
}

QString UserAccount::getPassword() const
{
    return userAccountData.password;
}

QString UserAccount::getEmail() const
{
    return userAccountData.email;
}

UserData UserAccount::getUsxerData() const
{
    return userAccountData;
}

