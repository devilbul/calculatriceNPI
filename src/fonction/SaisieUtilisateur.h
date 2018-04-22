#ifndef PROJETCPP_SAISIEUTILISATEUR_H
#define PROJETCPP_SAISIEUTILISATEUR_H

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include "../Utils/Utils.h"
#include "../expression/Constante.h"
#include "../expression/operation/Addition.h"
#include "../expression/operation/Multiplication.h"
#include "../expression/operation/Soustraction.h"
#include "../expression/operation/Division.h"
#include "../expression/Variable.h"
#include "Traitement.h"
#include "../symbole/Table.h"

using namespace std;

Expression *saisieExpressionNPI(Table *, bool);

#endif //PROJETCPP_SAISIEUTILISATEUR_H
