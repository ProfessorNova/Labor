#include<stdio.h>

float celsius(int fahrenheit){
    //rechnet fahrenheit in celsius um
    return (float)(5*(fahrenheit-32))/9;
}

int main(){
    printf("%dF = %.1fC", 20, celsius(20));
    return 0;
}