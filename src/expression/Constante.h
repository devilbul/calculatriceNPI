#ifndef PROJET_CONSTANTE_H
#define PROJET_CONSTANTE_H

#include <iostream>
#include <sstream>
#include <string>
#include "Expression.h"

using namespace std;

class Constante : public Expression {
private:
    float _constante;
public:
    Constante();

    explicit Constante(float);

    ~Constante() override;

    float calculer() override;

    void afficher() override;

    void afficherNPI() override;

    string notation() override;

    string notationPI() override;

    void setConstante(float);

    float getConstante();
};

#endif //PROJET_CONSTANTE_H
