#ifndef PROJETCPP_VARIABLE_H
#define PROJETCPP_VARIABLE_H

#include <iostream>
#include <sstream>
#include <string>
#include "Expression.h"

using namespace std;

class Variable : public Expression {
private:
    string _variable;
    float _constante;
public:
    Variable();

    explicit Variable(string);

    explicit Variable(float);

    explicit Variable(string, float);

    ~Variable() override;

    float calculer() override;

    void afficher() override;

    void afficherNPI() override;

    string notation() override;

    string notationPI() override;

    void setVariable(string);

    void setConstante(float);

    string getVariable();

    float getConstante();
};

#endif //PROJETCPP_VARIABLE_H
