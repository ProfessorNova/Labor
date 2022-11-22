#include<stdio.h>

float triangleArea(float g, float h){
    return g*h*1/2;
}

int main(){
    printf("%.2f", triangleArea(3, 4));
    return 0;
}