#include <iostream>
#include "date.h"
#include "client.h"
#include "compte.h"


void ajout(int solde, Compte& compte_credite, Compte& compte_debite) {
    if (compte_credite.getSolde() + solde < compte_credite.getPlafond() && compte_debite.getSolde() - solde > 0) {
        compte_credite.ajoutSolde(solde);
        compte_debite.retraitSolde(solde);
    } else if (compte_debite.getSolde() - solde < 0) {
        std::cout << "Erreur, le compte debite n'a pas assez d'argent" << std::endl;
    } else {
        std::cout << "Erreur, cela fait depasser le plafond du compte credite" << std::endl;
    }
}


int main() {
    Date date(17, 10, 2023);
    std::cout << date.toString() << std::endl;
    Client client("Lilian", "Soulairol");
    Compte compte("12348951234", 100000, 0.5, "FR7630001007190000000000G82", 1000000, client);
    std::cout << compte.getTitulaire().toString() << std::endl;
    std::cout << "Solde: " << compte.getSolde()/100 << " euros" << std::endl;
    Compte compte2("12348951279", 1000000, 0.5, "FR7630001007190000000000G82", 1000000, client);
    ajout(10000000, compte, compte2);
    std::cout << "Nouveau solde: " << compte.getSolde()/100 << " euros" << std::endl;
    std::cout << "Solde de compte 2: " << compte2.getSolde()/100 << " euros" << std::endl;
    return 0;
}
