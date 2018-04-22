#ifndef PROJET_MULTIPLICATION_H
#define PROJET_MULTIPLICATION_H

#include <iostream>
#include <sstream>
#include "../Operateur.h"

using namespace std;

class Multiplication : public Operateur {
public:
    Multiplication();

    Multiplication(Expression*, Expression*);

    ~Multiplication() override;

    float calculer() override;

    void afficher() override;

    void afficherNPI() override;

    string notation() override;

    string notationPI() override;
};

#endif //PROJET_MULTIPLICATION_H
