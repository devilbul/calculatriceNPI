#include "Table.h"

Table::Table() {
    globals = {};
}

Table::~Table() {
    globals.clear();
}

bool Table::trouverSymbole(string nom) {
    for (auto it = globals.begin(); it != globals.end(); it++)
        if (it->first == nom)
            return true;
    return false;
}

void Table::ajouterSymbole(string nom, float valeur) {
    if (!trouverSymbole(nom))
        globals.insert(pair<string, float>(nom, valeur));
}

float Table::avoirValeurSymbole(string nom) {
    if (trouverSymbole(nom))
        return globals.find(nom)->second;
    else
        return 0;
}

void Table::afficherValeurs() {
    for (auto it = globals.begin(); it != globals.end(); it++)
        cout << "{" << it->first << ", " << it->second << "}" << endl;
}
