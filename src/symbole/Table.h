#ifndef PROJETCPP_TABLE_H
#define PROJETCPP_TABLE_H

#include <iostream>
#include <map>

using namespace std;

class Table {
private:
    map<string, float> globals;
public:
    Table();

    ~Table();

    bool trouverSymbole(string);

    void ajouterSymbole(string, float);

    float avoirValeurSymbole(string);

    void afficherValeurs();
};

#endif //PROJETCPP_TABLE_H
