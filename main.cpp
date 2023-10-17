#include <iostream>
#include "Date.h"

int main() {
    Date date(17, 10, 2023);
    std::cout << date.toString() << std::endl;
    return 0;
}
