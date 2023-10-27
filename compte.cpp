//
// Created by lili3 on 27/10/2023.
//

#include "compte.h"
#include <string>
#include <iostream>

Compte::Compte(std::string numero, int solde, float interet, std::string iban, int plafond, Client titulaire)
        : _numero(numero), _solde(solde), _interet(interet), _iban(iban), _plafond(plafond), _titulaire(titulaire) {}

std::string Compte::getNumero() const {
    return _numero;
}

int Compte::getSolde() const {
    return _solde;
}

float Compte::getInteret() const {
    return _interet;
}

std::string Compte::getIban() const {
    return _iban;
}

int Compte::getPlafond() const {
    return _plafond;
}

Client Compte::getTitulaire() const {
    return _titulaire;
}

void Compte::ajoutSolde(int solde) {
    _solde += solde;
}

void Compte::retraitSolde(int solde) {
    _solde -= solde;
}

