#include "Variable.h"
#include <utility>

Variable::Variable() : Variable("z", 1) {}

Variable::Variable(string variables) : Variable(move(variables), 1) {}

Variable::Variable(float constante) : Variable("z", constante) {}

Variable::Variable(string variables, float constante) {
    this->_variable = move(variables);
    this->_constante = constante;
}

Variable::~Variable() = default;

float Variable::calculer() {
    return this->_constante;
}

void Variable::afficher() {
    cout << notation() << endl;
}

void Variable::afficherNPI() {
    cout << notationPI() << endl;
}

string Variable::notation() {
    stringstream ss;
    ss << this->_variable;
    return ss.str();
}

string Variable::notationPI() {
    stringstream ss;
    ss << this->_variable;
    return ss.str();
}

void Variable::setVariable(string variable) {
    this->_variable = variable;
}

void Variable::setConstante(float constante) {
    this->_constante = constante;
}

string Variable::getVariable() {
    return this->_variable;
}

float Variable::getConstante() {
    return this->_constante;
}