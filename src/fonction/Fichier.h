#ifndef PROJETCPP_FICHIER_H
#define PROJETCPP_FICHIER_H

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <iterator>
#include <sstream>
#include "../expression/Expression.h"
#include "../Utils/Utils.h"
#include "../Utils/Utils.h"
#include "../expression/Constante.h"
#include "../expression/operation/Addition.h"
#include "../expression/operation/Multiplication.h"
#include "../expression/operation/Soustraction.h"
#include "../expression/operation/Division.h"
#include "../expression/Variable.h"
#include "../symbole/Table.h"
#include "Traitement.h"

using namespace std;

const static string cheminFichier = getCurrentWorkingDir() + separator() + "calcul.txt";

void sauvegarderFichier(Expression *);

Expression *chargerFichier(Table *);

bool trouverFichier();

#endif //PROJETCPP_FICHIER_H
