#include <stdio.h>

int main(){
    //Variablen
    int n;
    int m;

    //Eingabe von Variablen
    scanf("%d %d", &n, &m);

    /*geht Zahlen von 1 bis 200 durch und Verwendet % um and den richtigen stellen
    fizz und buzz auszugeben*/
    for(int i = 1; i <=200; i++){
        if(i%n==0){
            printf("fizz");
        }
        if(i%m==0){
            printf("buzz");
        }
        if(i%n != 0 && i%m != 0){
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}