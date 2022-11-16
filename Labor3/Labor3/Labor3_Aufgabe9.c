#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //Variablen
    int seitenlaenge;
    int ist_rand;
    int ist_kreuz;

    //Eingabe
    scanf("%d", &seitenlaenge);

    //for-Schleife für Zeilen
    for (int i = 1; i <= seitenlaenge; i++)
    {
        //for-Schleife für Spalten
        for (int j = 1; j <= seitenlaenge; j++)
        {
            //wenn der Punkt am Rand ist, dann ist ist_rand wahr ansonsten nicht.
            //Bereiche sind von 1 bis seitenlaenge, da es sonst unten zu einer division durch null kommen würde.
            ist_rand = (i==1 || i==seitenlaenge || j==1 || j==seitenlaenge);

            //wenn der Punkt auf eine der Diagonalen liegt, dann ist ist_kreuz wahr ansonsten nicht.
            //i/j muss float sein, da sonst mehr Werte als gewollt gleich 1 sind, durch Rundung.
            ist_kreuz = ((float)i/j == 1 || (float)i+j == seitenlaenge+1);

            //Ausgabe
            if (ist_rand||ist_kreuz)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}