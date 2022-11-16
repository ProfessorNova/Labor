#include<stdio.h>

int main(){
    //Definitionen
    int i;
    int *ptr;
    int **ptrptr;

    //Zuweisungen
    ptr = &i;
    ptrptr = &ptr;
    i = 1;

    //Ausgabe
    printf("%d\n", i);
    printf("%d\n", *ptr);
    
    //Zuweisung über ptrptr
    **ptrptr = 2;

    //Ausgabe
    printf("%d", i);

    return 0;
}