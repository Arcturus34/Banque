#include <iostream>
#include "Date.h"
#include "Client.h"

int main() {
    Date date(17, 10, 2023);
    std::cout << date.toString() << std::endl;
    Client client("Lili", "Lili","24 rue de la biscotte", date);
    std::cout << client.toString() << std::endl;
    std::cout<<"TEST"<<std::endl;
    return 0;
}
