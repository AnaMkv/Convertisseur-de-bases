#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

unsigned int compterChiffres(unsigned int nombre) {
    char buffer[20];
    sprintf(buffer, "%u", nombre);
    return strlen(buffer);
}

unsigned int passageDecimalABase(unsigned int nombre, unsigned int tableau[], unsigned int base2) {
    unsigned int indiceTableau = 0;
    unsigned int i = 0;
    while (nombre > 0) {
        tableau[i] = nombre % base2;
        nombre /= base2;
        i++;
        indiceTableau++;
    }
    return indiceTableau;
}

unsigned int passageBaseADecimal(const char *nombreStr, unsigned int base1) {
    unsigned int longueur = strlen(nombreStr);
    unsigned int converti = 0;
    for (unsigned int i = 0; i < longueur; ++i) {
        char c = nombreStr[longueur - i - 1];
        unsigned int valeurChiffre;
        if (isdigit(c))
            valeurChiffre = c - '0';
        else if (isalpha(c))
            valeurChiffre = toupper(c) - 'A' + 10;
        else {
            printf("Caractère invalide trouvé : %c\n", c);
            return 0;
        }
        if (valeurChiffre >= base1) {
            printf("Chiffre %c invalide pour la base %u\n", c, base1);
            return 0;
        }
        converti += valeurChiffre * (unsigned int) pow(base1, i);
    }
    return converti;
}

void afficherEnBase(int tableau[], unsigned int indiceTableau) {
    for (int j = 0; j < indiceTableau; j++) {
        if((indiceTableau - j) % 4 == 0 && j != 0)
            printf(" ");
        if (tableau[indiceTableau - j - 1] >= 10)
            printf("%c", 'A' + (tableau[indiceTableau - j - 1] - 10));
        else
            printf("%d", tableau[indiceTableau - j - 1]);
    }
}

int main(void) {
    while(1) {
        char nombreStr[100];
        char str[100];
        unsigned int base1, base2;
        printf("Saisissez un nombre et sa base : ");
        fgets(str, 100, stdin);
        sscanf(str, "%s %u", nombreStr, &base1);
        if(strcmp(nombreStr, "exit") == 0)
            return 0;
        if (base1 <= 1 || base1 > 36) {
            printf("La base doit être comprise entre 2 et 36.\n");
            continue;
        }
        printf("Saisissez la base dans laquelle vous souhaitez convertir ce nombre : ");
        scanf("%u", &base2);
        if (base2 <= 1 || base2 > 36) {
            printf("La base doit être comprise entre 2 et 36.\n");
            continue;
        }
        unsigned int nombreBase10 = passageBaseADecimal(nombreStr, base1);
        if (nombreBase10 == 0) {
            printf("Erreur de conversion.\n");
            continue;
        }
        if (base2 == 10)
            printf("Le nombre %s en base %u est : %u\n", nombreStr, base1, nombreBase10);
        else {
            unsigned int tableau[100];
            unsigned int indiceTableau = passageDecimalABase(nombreBase10, tableau, base2);
            printf("Le nombre %s (base %u) en base %u est : ", nombreStr, base1, base2);
            afficherEnBase(tableau, indiceTableau);
            printf("\n");
        }
        fflush(stdin);
    }
}
