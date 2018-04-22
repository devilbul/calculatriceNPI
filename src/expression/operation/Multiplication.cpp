#include "Multiplication.h"

Multiplication::Multiplication() = default;

Multiplication::Multiplication(Expression* opG, Expression* opD) : Operateur(opG, opD) {}

Multiplication::~Multiplication() = default;

float Multiplication::calculer() {
    return getOpG()->calculer() * getOpD()->calculer();
}

void Multiplication::afficher() {
    cout << notation() << endl;
}

void Multiplication::afficherNPI() {
    cout << notationPI() << endl;
}

string Multiplication::notation() {
    stringstream ss;
    ss << getOpG()->notation() << endl;
    ss << "*" << endl;
    ss << getOpD()->notation();
    return ss.str();
}

string Multiplication::notationPI() {
    stringstream ss;
    ss << getOpG()->notationPI() << endl;
    ss << getOpD()->notationPI() << endl;
    ss << "*";
    return ss.str();
}