//
// Created by lili3 on 27/10/2023.
//

#ifndef BANQUE_COMPTE_H
#define BANQUE_COMPTE_H

#include <string>
#include "client.h"

class Compte {

public:
    Compte(std::string numero, int solde, float interet, std::string iban, int plafond, Client titulaire);
    std::string getNumero() const;
    int getSolde() const;
    float getInteret() const;
    std::string getIban() const;
    int getPlafond() const;
    Client getTitulaire() const;
    void ajoutSolde(int solde);
    void retraitSolde(int solde);

private:
    std::string _numero;
    int _solde;
    float _interet;
    std::string _iban;
    int _plafond;
    Client _titulaire;


};




#endif //BANQUE_COMPTE_H
