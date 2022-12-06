#include<stdio.h>
#define PI 3.1415

void sphere(int radius, double *volume, double *surface){
    *volume = PI*radius*radius*radius*1.3333;
    *surface = 4*PI*radius*radius;
}

int main(){
    int radius = 5;
    double volume, surface;
    sphere(radius, &volume, &surface);
    printf("Radius: %d\nVolumen: %.1lf\nOberflaeche %.1lf\n", radius, volume, surface);
}