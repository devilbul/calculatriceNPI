#include "Fichier.h"

void sauvegarderFichier(Expression *calcul) {
    ofstream fichier(cheminFichier);
    istringstream calculNotation(calcul->notationPI());
    istringstream delimiter("\n");
    vector<string> results(istream_iterator<string>{calculNotation}, istream_iterator<string>(delimiter));

    for (auto &result : results)
        fichier << conversionStringVersAscii(result) << endl;

    fichier.flush();
    fichier.close();
}

Expression *chargerFichier(Table *symbole) {
    ifstream fichier(cheminFichier);
    stack<Expression *> pile;
    string buffer = "";
    string ligne;

    if (fichier) {
        while (getline(fichier, ligne)) {
            buffer = conversionAsciiVersString(ligne);
            cout << buffer << endl;
            traite(symbole, &pile, buffer, false);
        }

        fichier.close();
    }

    return pile.top();
}

bool trouverFichier() {
    if (FILE *file = fopen(cheminFichier.c_str(), "r")) {
        fclose(file);
        return true;
    } else
        return false;
}