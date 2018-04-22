#include "Soustraction.h"

Soustraction::Soustraction() = default;

Soustraction::Soustraction(Expression *opG, Expression *opD) : Operateur(opG, opD) {}

Soustraction::~Soustraction() = default;

float Soustraction::calculer() {
    return getOpG()->calculer() - getOpD()->calculer();
}

void Soustraction::afficher() {
    cout << notation() << endl;
}

void Soustraction::afficherNPI() {
    cout << notationPI() << endl;
}

string Soustraction::notation() {
    stringstream ss;
    ss << getOpG()->notation() << endl;
    ss << "-" << endl;
    ss << getOpD()->notation();
    return ss.str();
}

string Soustraction::notationPI() {
    stringstream ss;
    ss << getOpG()->notationPI() << endl;
    ss << getOpD()->notationPI() << endl;
    ss << "-";
    return ss.str();
}
