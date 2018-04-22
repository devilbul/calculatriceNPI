#include "Operateur.h"

Operateur::Operateur() = default;

Operateur::Operateur(Expression* opG, Expression* opD) {
    this->_opG = opG;
    this->_opD = opD;
}

Operateur::~Operateur() = default;

void Operateur::setOpG(Expression* opG) {
    this->_opG = opG;
}

void Operateur::setOpD(Expression* opD) {
    this->_opD = opD;
}

Expression* Operateur::getOpG() {
    return this->_opG;
}

Expression* Operateur::getOpD() {
    return this->_opD;
}

