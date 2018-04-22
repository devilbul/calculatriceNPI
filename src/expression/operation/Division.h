#ifndef PROJET_DIVISION_H
#define PROJET_DIVISION_H

#include <iostream>
#include <sstream>
#include <assert.h>
#include "../Operateur.h"

using namespace std;

class Division : public Operateur {
public:
    Division();

    Division(Expression*, Expression*);

    ~Division() override;

    float calculer() override;

    void afficher() override;

    void afficherNPI() override;

    string notation() override;

    string notationPI() override;
};

#endif //PROJET_DIVISION_H
