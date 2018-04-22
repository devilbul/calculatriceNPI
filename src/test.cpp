#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct ma_pile {
    char info;
    struct ma_pile *suiv;
};

/****************** declaration Variables globales *****************/

struct ma_pile *sommet;
char p1;
char ch[20], c;
int i = 0, code = 0;
char tempo[2];

/****************** ce qui suit est des fonctions *********************/

struct ma_pile *Init(struct ma_pile **sommet) {
    sommet = NULL;

    return *sommet;
}

int char_to_int(char c) {
    if (c == '0')
        return code == 0;
    else {
        code = c - 48;
        return code;
    }
}

char int_to_char(int int_to_ch) {
    int_to_ch += 48;
    c = (char) int_to_ch;    // converti l'ascii int_to_char en caractere
    return c;
}

void EMP(char x, struct ma_pile **sommet) {
    struct ma_pile *p;

    p = (struct ma_pile *) malloc(sizeof(struct ma_pile));
    p->info = x;
    p->suiv = *sommet;

    sommet = &p;

}

int DEP(struct ma_pile **sommet) {
    if (*sommet == NULL)
        printf("E R R E U R ! LA PILE EST VIDE");
    else {
        struct ma_pile *p = *sommet;
        p1 = p->info;

        sommet = &p->suiv;

        free(p);
        printf("\nOPERATION SUCCESS\n");
        printf("VALEUR DEPILEE :%d\n", char_to_int(p1));
        return p1;
    }

}

void saisie(char t[1]) {
    char c;
    int j1 = 0;

    do {
        c = getch();
        if (((c >= '0') && (c <= '9')) || ((c == '*') || (c == '-') || (c == '+') || (c == '/'))) {
            if ((c >= '0') && (c <= '9')) {
                j1++;     //comptabilise les caracteres entre '0' et '9'
                if (j1 > 2)
                    printf("ACTION NON AUTORISEE\n");
                else {
                    t[i] = c;
                    printf("%c\n", t[i]);
                    i++;
                }
            }

            if ((c == '*') || (c == '-') || (c == '+') || (c == '/')) {
                j1 = 0;
                t[i] = c;
                printf("%c\n", t[i]);
                i++;

            }
        }
    } while (c != 13);
}

void VISU(struct ma_pile *sommet) {
    if (sommet != NULL) {
        struct ma_pile *p = sommet;

        while (p) {
            printf("%c ->", p->info);
            p = p->suiv;
        }
    } else
        printf("E R R E U R ! VEUILLEZ D'ABORD REMPLIR LA PILE ");
}

void Traitement(char t[1]) {
    int k, k1, code2 = 0, code1 = 0, resultat = 0;

    char c;
    for (k = 0; k < i; k++) {
        if ((t[k] >= '0') && (t[k] <= '9'))
            EMP(t[k], &sommet);

        if ((t[k] == '*') || (t[k] == '-') || (t[k] == '+') || (t[k] == '/')) {
            k1 = 1;      //on commence ? d?piler

            while ((sommet != NULL) && (k1 >= 0))  //ne depile que les 2 1ere valeurs
            {
                DEP(&sommet);
                tempo[k1] = p1;
                k1--;
            }
            code1 = char_to_int(tempo[0]);
            code2 = char_to_int(tempo[1]);

            switch (t[k]) {
                case '+':
                    resultat = code1 + code2;
                    printf("%d+%d=%d\n", code1, code2, resultat);
                    break;
                case '-':
                    resultat = code1 - code2;
                    printf("%d-%d=%d\n", code1, code2, resultat);
                    break;
                case '*':
                    resultat = code1 * code2;
                    printf("%d*%d=%d\n", code1, code2, resultat);
                    break;
                case '/':
                    resultat = code1 / code2;
                    printf("%d/%d=%d   il s'agit d'une division enti?re\n", code1, code2, resultat);
                    break;
            }

            EMP(int_to_char(resultat), &sommet);

        }

    }

}

/***********************
Fin des fonctions **********/

/***********************
Ceci est mon programme****/

/*int main() {
    system("cls");
    saisie(ch);
    Init(&sommet);
    Traitement(ch);
    getch();

    return 0;
}*/