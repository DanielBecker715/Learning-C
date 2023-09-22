/******************************************************************
 * Projekt: ProgrammierenInC
 * Dateiname: ??? 
 * Beschreibung: ??? 
 * Autor: Daniel Becker 
 * Erstellt: Sept. 2023
 ******************************************************************/

#include <stdio.h>
#include <stdlib.h> /* für system("PAUSE") */

int main(void) {
    int a, b;
    float erg;

    printf("Ein erstes Programm...\n\n");
    printf("Bitte die erste (ganze) Zahl eingeben:\n");
    scanf("%d", &a);

    printf("Bitte die zweite (ganze) Zahl eingeben:\n");
    scanf("%d", &b);

    erg = a + b;
    printf("%d + %d = %f\n", a, b, erg);

    erg = a - b;
    printf("%d - %d = %f\n", a, b, erg);

    erg = a * b;
    printf("%d * %d = %f\n", a, b, erg);

    erg = 1.0 * a / b;
    printf("%d / %d = %f\n", a, b, erg);

    system("PAUSE");
    return 0;
}
