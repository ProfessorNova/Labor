#include <stdio.h>

int main(){
    //erstelle Array
    double array[4];
    int minIndex = 0;

    for(int i = 0; i<4; i++){
        //lese Werte in das Array ein
        scanf("%lf", &array[i]);

        /*wenn jetziger Wert vom Array kleiner ist als der
        Wert vom minIndex wird minIndex darauf gesetzt*/
        if (i-1 >= 0 && array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }

    //Ausgabe
    printf("Kleinste Zahl: %.1lf an Index %d", array[minIndex], minIndex);

    return 0;
}