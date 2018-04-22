#include "Addition.h"

Addition::Addition() = default;

Addition::Addition(Expression *opG, Expression *opD) : Operateur(opG, opD) {}

Addition::~Addition() = default;

float Addition::calculer() {
    return getOpG()->calculer() + getOpD()->calculer();
}

void Addition::afficher() {
    getOpG()->afficher();
    cout << "+" << endl;
    getOpD()->afficher();
}

void Addition::afficherNPI() {
    getOpG()->afficherNPI();
    getOpD()->afficherNPI();
    cout << "+" << endl;
}

string Addition::notation() {
    stringstream ss;
    ss << getOpG()->notation() << endl;
    ss << "+" << endl;
    ss << getOpD()->notation();
    return ss.str();
}

string Addition::notationPI() {
    stringstream ss;
    ss << getOpG()->notationPI() << endl;
    ss << getOpD()->notationPI() << endl;
    ss << "+";
    return ss.str();
}



