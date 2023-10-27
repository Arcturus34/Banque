//
// Created by lili3 on 17/10/2023.
//

#include "client.h"
#include "date.h"

Client::Client(const std::string name, const std::string firstName)
        : _name(name), _firstName(firstName){}

const std::string Client::getName() const {
    return _name;
}

const std::string Client::getFirstName() const {
    return _firstName;
}

std::string Client::toString() {
    return _name + " " + _firstName;
}