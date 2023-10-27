//
// Created by lili3 on 17/10/2023.
//
#include <string>
#include "date.h"
#ifndef BANQUE_CLIENT_H
#define BANQUE_CLIENT_H


class Client {
public:
    Client(const std::string name, const std::string firstName);

    const std::string getName() const;

    const std::string getFirstName() const;


    std::string toString();

private:
    std::string _name;
    std::string _firstName;
};


#endif //BANQUE_CLIENT_H
