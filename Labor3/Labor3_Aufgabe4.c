#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //Variablen
    int hoehe;
    int breite;

    //Eingabe
    scanf("%d %d", &hoehe, &breite);

    //for-Schleife für Zeilen
    for (int i = 0; i < hoehe; i++)
    {
        //for-Schleife für Spalten
        for (int j = 0; j < breite; j++)
        {
            //wenn der Punkt am Rand ist, dann wird ein "*" ausgegeben, sonst " "
            if (i==0 || i==hoehe-1 || j==0 || j==breite-1)
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