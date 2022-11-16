#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //Variablen
    int eingabe;
    //Eingabe
    scanf("%d", &eingabe);

    //for-Schleife für Ausgabe
    for(int i = 0; i < eingabe; i++){
        printf("*");
    }

    return 0;
}