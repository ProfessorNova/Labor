#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //Variablen
    int eingabe;
    //Eingabe
    scanf("%d", &eingabe);

    //for-Schleife für Ausgabe
    for(int i = 0; i < eingabe; i++){
        //Entscheidet über i, ob die nächste Ausgabe '*' oder '_' sein soll
        //Wenn i gerade ist, dann "*", sonst "_"
        if (i%2)
        {
            printf("_");
        }
        else
        {
            printf("*");
        }
    }

    return 0;
}