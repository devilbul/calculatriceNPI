#ifndef PROJET_EXPRESSION_H
#define PROJET_EXPRESSION_H

#include <iostream>
#include <string>

using namespace std;

class Expression {
private:
    bool _isConstante;
public:
    Expression();

    explicit Expression(bool);

    virtual ~Expression();

    virtual float calculer() = 0;

    virtual void afficher() = 0;

    virtual void afficherNPI() = 0;

    virtual string notation() = 0;

    virtual string notationPI() = 0;

    void setIsConstante(bool);

    bool getIsConstante();
};

#endif //PROJET_EXPRESSION_H
