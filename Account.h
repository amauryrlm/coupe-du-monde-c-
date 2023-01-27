#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account
{
    public:
        Account(std::string n, std::string s, std::string e, int a, std::string nat, std::string p): name(n), surname(s), email(e), age(a), nationality(nat), password(p){}
        Account();
        virtual ~Account(){}
        string getpassword()const{return this->name;}

    protected:
        std::string name;
        std::string surname;
        std::string email;
        int age;
        std::string nationality;
        std::string password;
};

#endif // ACCOUNT_H