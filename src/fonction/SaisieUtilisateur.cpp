#include "SaisieUtilisateur.h"

// Todo fonction de traitement
// Todo fonction saisie et fonction chargement
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

