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
            /*i%2 bzw. j%2 gibt 1 aus, wenn i bzw. j ungerade ist.
            Die if-Bedingung ist whar, wenn i gerade und j ungerade oder
            i ungerade und j gerade ist.*/
            if ((i%2+j%2)%2)
            {
                printf("-");
            }
            else
            {
                printf("+");
            }
        }
        printf("\n");
    }
    
    return 0;
}