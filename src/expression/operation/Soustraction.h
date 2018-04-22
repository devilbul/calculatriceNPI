#ifndef PROJET_SOUSTRACTION_H
#define PROJET_SOUSTRACTION_H

#include <iostream>
#include <sstream>
#include "../Operateur.h"

using namespace std;

class Soustraction : public Operateur{
public:
    Soustraction();

    Soustraction(Expression*, Expression*);

    ~Soustraction() override;

    float calculer() override;

    void afficher() override;

    void afficherNPI() override;

    string notation() override;

    string notationPI() override;
};

#endif //PROJET_SOUSTRACTION_H
