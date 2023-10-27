//
// Created by lili3 on 17/10/2023.
//
#include <string>
#ifndef BANQUE_DATE_H
#define BANQUE_DATE_H


class Date {
public:
    Date(int _day, int _month, int _year);
    int getDay();
    int getMonth();
    int getYear();
    std::string toString();

private:
    int _day;
    int _month;
    int _year;
};


#endif //BANQUE_DATE_H
