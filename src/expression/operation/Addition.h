#ifndef PROJET_ADDITION_H
#define PROJET_ADDITION_H

#include <iostream>
#include <sstream>
#include "../Operateur.h"

using namespace std;

class Addition : public Operateur {
public:
    Addition();

    Addition(Expression*, Expression*);

    ~Addition() override;

    float calculer() override;

    void afficher() override;

    void afficherNPI() override;

    string notation() override;

    string notationPI() override;
};

#endif //PROJET_ADDITION_H
