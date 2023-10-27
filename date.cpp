//
// Created by lili3 on 17/10/2023.
//

#include "date.h"

Date::Date(int day, int month, int year) : _day(day), _month(month), _year(year) {}

int Date::getDay() {
    return _day;
}

int Date::getMonth() {
    return _month;
}

int Date::getYear() {
    return _year;
}

std::string Date::toString() {
    return std::to_string(_day) + "/" + std::to_string(_month) + "/" + std::to_string(_year);
}