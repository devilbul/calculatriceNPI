#include <iostream>
#include "fonction/SaisieUtilisateur.h"
#include "fonction/Fichier.h"
#include "Utils/Utils.h"
#include "expression/operation/Division.h"
#include "expression/Constante.h"
#include "expression/operation/Addition.h"
#include "symbole/Table.h"

using namespace std;

int main(int argc, char *argv[]) {
    Table symbole = Table();
    Expression *calcul;
    string reponse;
    bool simplification = false;
    bool continuer = true;

    cout << "======================Calculatrice, notation polonaise inversee======================" << endl;

    while (continuer) {
        cout << "Voulez-vous simplifier les expressions ? (Oui / Non)" << endl;
        cin >> reponse;

        if (reponse == "Oui" || reponse == "oui")
            simplification = true;

        reponse = "";

        if (trouverFichier()) {
            cout << endl;
            cout << "Voulez-vous charger le dernier calcul ou saisir un nouveau ? (Charger / Saisir)" << endl;
            cin >> reponse;

            if (reponse == "Charger" || reponse == "charger")
                calcul = chargerFichier(&symbole);
            else
                calcul = saisieExpressionNPI(&symbole, simplification);

            reponse = "";
        } else
            calcul = saisieExpressionNPI(&symbole, simplification);

        cout << calcul->calculer() << endl;


        cout << endl;
        cout << "Voulez-vous sauvegarder le dernier calcul ? (Oui / Non)" << endl;
        cin >> reponse;

        if (reponse == "Oui" || reponse == "oui")
            sauvegarderFichier(calcul);

        reponse = "";

        cout << endl;
        cout << "Voulez-vous continuer ? (Oui / Non)" << endl;
        cin >> reponse;

        if (reponse == "Non" || reponse == "non")
            continuer = false;

        reponse = "";
        cout << endl;
    }

    symbole.afficherValeurs();

    return EXIT_SUCCESS;
}