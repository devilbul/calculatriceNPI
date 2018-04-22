#ifndef PROJETCPP_TRAITEMENT_H
#define PROJETCPP_TRAITEMENT_H

#include <iostream>
#include <stack>
#include <string>
#include <typeinfo>
#include "../Utils/Utils.h"
#include "../expression/Expression.h"
#include "../expression/Constante.h"
#include "../expression/operation/Addition.h"
#include "../expression/operation/Multiplication.h"
#include "../expression/operation/Soustraction.h"
#include "../expression/operation/Division.h"
#include "../expression/Variable.h"
#include "../symbole/Table.h"

using namespace std;

void traite(Table *, stack<Expression *> *, string, bool);

#endif //PROJETCPP_TRAITEMENT_H
