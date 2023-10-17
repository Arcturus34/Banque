//
// Created by lili3 on 17/10/2023.
//

#include "Client.h"
#include "Date.h"

Client::Client(const std::string &name, const std::string &firstName, const std::string &address, const Date &birthDate)
        : _name(name), _firstName(firstName), _address(address), _birthDate(birthDate) {}

const std::string &Client::getName() const {
    return _name;
}

const std::string &Client::getFirstName() const {
    return _firstName;
}

const std::string &Client::getAddress() const {
    return _address;
}

const Date &Client::getBirthDate() const {
    return _birthDate;
}

std::string Client::toString() {
    return _name + " " + _firstName + " " + _address + " " + _birthDate.toString();
}