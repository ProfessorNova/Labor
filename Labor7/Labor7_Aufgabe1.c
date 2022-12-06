#include <stdio.h>

int minimum(int *arr, int length){
    int minIndex = 0;

    /*gehe durch einzelne Elemente des Arrays und setze min Index
    auf den Index vom kleinsten Wert*/
    for (int current = 0; current < length; current++)
    {
        if (arr[current] < arr[minIndex]) {
            minIndex = current;
        }
    }

    //gebe kleinsten Wert der Zahlenfolge zurück
    return arr[minIndex];
}

int main(){
    int numbers[] = {4, 6, 9, 5};
    printf("%d", minimum(numbers, 4));

    return 0;
}