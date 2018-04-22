#ifndef PROJET_OPERATEUR_H
#define PROJET_OPERATEUR_H

#include "Expression.h"

class Operateur : public Expression {
private:
    Expression* _opG,* _opD;
public:
    Operateur();

    Operateur(Expression*, Expression*);

    ~Operateur() override;

    void setOpG(Expression*);

    void setOpD(Expression*);

    Expression* getOpG();

    Expression* getOpD();
};

#endif //PROJET_OPERATEUR_H
