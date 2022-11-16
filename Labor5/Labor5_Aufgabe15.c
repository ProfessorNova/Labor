#include<stdio.h>

int main(){
    //deklariere int-Array der Länge 4
    int arr[4];
    int *ptr;

    //lese Werte ins Array ein
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Lege Pointer auf das Feld mit Index 2
    ptr = &arr[2];
    
    //Ausgabe
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //Änderung vom Wert des Objektes, auf das der Pointer zeigt
    *ptr = 42;

    //Erneute Ausgabe
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}