#include "Constante.h"

Constante::Constante() : Constante(0) {
}

Constante::Constante(float constante) {
    this->_constante = constante;
    setIsConstante(true);
}

Constante::~Constante() = default;

float Constante::calculer() {
    return this->_constante;
}

void Constante::afficher() {
    cout << notation() << endl;
}

void Constante::afficherNPI() {
    cout << notationPI() << endl;
}

string Constante::notation() {
    stringstream ss;
    ss << this->_constante;
    return ss.str();
}

string Constante::notationPI() {
    stringstream ss;
    ss << this->_constante;
    return ss.str();
}

void Constante::setConstante(float constante) {
    this->_constante = constante;
}

float Constante::getConstante() {
    return this->_constante;
}
