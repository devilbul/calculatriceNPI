#include "Traitement.h"

void traite(Table *symbole, stack<Expression *> *pile, string buffer, bool simplification) {
    Expression *operandeGaucheBuffer, *operandeDroitBuffer;

    cout << "";

    if (buffer == "+") {
        operandeDroitBuffer = pile->top();
        pile->pop();
        operandeGaucheBuffer = pile->top();
        pile->pop();

        if (operandeGaucheBuffer->getIsConstante() && operandeDroitBuffer->getIsConstante() && simplification)
            pile->push(new Constante(Addition(operandeGaucheBuffer, operandeDroitBuffer).calculer()));
        else
            pile->push(new Addition(operandeGaucheBuffer, operandeDroitBuffer));

    } else if (buffer == "-") {
        operandeDroitBuffer = pile->top();
        pile->pop();
        operandeGaucheBuffer = pile->top();
        pile->pop();

        if (operandeGaucheBuffer->getIsConstante() && operandeDroitBuffer->getIsConstante() && simplification)
            pile->push(new Constante(Soustraction(operandeGaucheBuffer, operandeDroitBuffer).calculer()));
        else
            pile->push(new Soustraction(operandeGaucheBuffer, operandeDroitBuffer));
    } else if (buffer == "*") {
        operandeDroitBuffer = pile->top();
        pile->pop();
        operandeGaucheBuffer = pile->top();
        pile->pop();
        pile->push(new Multiplication(operandeGaucheBuffer, operandeDroitBuffer));

        if (operandeGaucheBuffer->getIsConstante() && operandeDroitBuffer->getIsConstante() && simplification)
            pile->push(new Constante(Multiplication(operandeGaucheBuffer, operandeDroitBuffer).calculer()));
        else
            pile->push(new Multiplication(operandeGaucheBuffer, operandeDroitBuffer));
    } else if (buffer == "/") {
        operandeDroitBuffer = pile->top();
        pile->pop();
        operandeGaucheBuffer = pile->top();
        pile->pop();
        pile->push(new Division(operandeGaucheBuffer, operandeDroitBuffer));

        if (operandeGaucheBuffer->getIsConstante() && operandeDroitBuffer->getIsConstante() && simplification)
            pile->push(new Constante(Division(operandeGaucheBuffer, operandeDroitBuffer).calculer()));
        else
            pile->push(new Division(operandeGaucheBuffer, operandeDroitBuffer));
    } else {
        if (allDigits(buffer) || (startsWith(buffer, "_") && buffer.size() > 1 && allDigits(buffer.substr(1, buffer.size())))) {
            if (startsWith(buffer, "_"))
                pile->push(new Constante(-1 * stof(buffer.substr(1, buffer.size()))));
            else
                pile->push(new Constante(stof(buffer)));
        } else if (allLetters(buffer) || (startsWith(buffer, "_") && buffer.size() > 1 && allLetters(buffer.substr(1, buffer.size())))) {
            if (startsWith(buffer, "_")) {
                if (symbole->trouverSymbole(buffer.substr(1, buffer.size())))
                    pile->push(new Variable(buffer, -1 * symbole->avoirValeurSymbole(buffer.substr(1, buffer.size()))));
                else {
                    float valeur;

                    cout << "Nouvelle variable," << endl;
                    cout << "Veuillez saisir la valeur de la variable \"" << buffer.substr(1, buffer.size()) << "\" :"
                         << endl;
                    cin >> valeur;

                    symbole->ajouterSymbole(buffer.substr(1, buffer.size()), valeur);
                    pile->push(new Variable(buffer, -1 * valeur));
                }
            } else {
                if (symbole->trouverSymbole(buffer))
                    pile->push(new Variable(buffer, symbole->avoirValeurSymbole(buffer)));
                else {
                    float valeur;

                    cout << "Nouvelle variable," << endl;
                    cout << "Veuillez saisir la valeur de la variable \"" << buffer << "\" :" << endl;
                    cin >> valeur;

                    symbole->ajouterSymbole(buffer, valeur);
                    pile->push(new Variable(buffer, valeur));
                }
            }
        }
    }
}