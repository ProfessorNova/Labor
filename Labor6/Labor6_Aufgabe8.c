#include<stdio.h>

float bmi(int gewicht_kg, int groesse_cm){
    //umrechnen in richtige Einheit
    float groesse_m = (float)groesse_cm/100;
    //BMI-Wert wird zurückgegeben
    return gewicht_kg/(groesse_m*groesse_m);
}

int main(){
    printf("%dkg und %fm = %.2lf", 85, 1.5, bmi(85, 150));
    return 0;
}