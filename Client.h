//
// Created by lili3 on 17/10/2023.
//
#include <string>
#include "Date.h"
#ifndef BANQUE_CLIENT_H
#define BANQUE_CLIENT_H


class Client {
public:
    Client(const std::string &name, const std::string &firstName, const std::string &address, const Date &birthDate);

    const std::string &getName() const;

    const std::string &getFirstName() const;

    const std::string &getAddress() const;

    const Date &getBirthDate() const;

    std::string toString();

private:
    std::string _name;
    std::string _firstName;
    std::string _address;
    Date _birthDate;
};


#endif //BANQUE_CLIENT_H
