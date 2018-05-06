#include "SaisieUtilisateur.h"

Expression *saisieExpressionNPI(Table *symbole, bool simplification) {
    stack<Expression *> pile;
    string buffer = "";

    cout << endl;
    cout << "Veuillez saisir une expression en notation polonaise inverse :" << endl;
    cin >> buffer;

    while (buffer != "p") {
        traite(symbole, &pile, buffer, simplification);
        cin >> buffer;
    }

    return pile.top();
}

