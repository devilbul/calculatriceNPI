#include "Expression.h"

Expression::Expression() {
    this->_isConstante = false;
}

Expression::Expression(bool isConstante) {
    this->_isConstante = isConstante;
}

Expression::~Expression() = default;

void Expression::setIsConstante(bool isConstante) {
    this->_isConstante = isConstante;
}

bool Expression::getIsConstante() {
    return this->_isConstante;
}
