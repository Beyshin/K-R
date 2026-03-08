#include <stdio.h>

#define UPPER_BOUNDS 300
#define LOWER_BOUNDS 0
#define STEP_SIZE 20


float fahrToCelsius(float fahr){
    return (5.0 / 9.0) * (fahr - 32.0);
}

int main(){

    float fahr, celsius;
    float upper, lower;


    fahr = lower;
    printf("%3s %6s\n", "Fahrenheit", "Celsius");
    for(fahr = UPPER_BOUNDS; fahr >= LOWER_BOUNDS; fahr -= STEP_SIZE){
        celsius = fahrToCelsius(fahr);
        printf("%3.0f %6.2f\n", fahr, celsius);
    }   

    return 0;
}