#include "Division.h"

Division::Division() = default;

Division::Division(Expression* opG, Expression* opD) : Operateur(opG, opD) {}

Division::~Division() = default;

float Division::calculer() {
    assert (getOpD()->calculer() != 0);
    return getOpG()->calculer() / getOpD()->calculer();
}

void Division::afficher() {
    assert (getOpD()->calculer() != 0);
    cout << notationPI() << endl;
}

void Division::afficherNPI() {
    assert (getOpD()->calculer() != 0);
    cout << notationPI() << endl;
}

string Division::notation() {
    assert (getOpD()->calculer() != 0);
    stringstream ss;
    ss << getOpG()->notation() << endl;
    ss << "/" << endl;
    ss << getOpD()->notation();
    return ss.str();
}

string Division::notationPI() {
    assert (getOpD()->calculer() != 0);
    stringstream ss;
    ss << getOpG()->notationPI() << endl;
    ss << getOpD()->notationPI() << endl;
    ss << "/";
    return ss.str();
}