#include <stdio.h>

int main(){
    float celsius, fahr;
    float lower, upper, step;

    lower = -20;
    upper = 100;
    step = 10;

    for(celsius = lower; celsius <= upper; celsius += step){
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f %6.2f\n", celsius, fahr);
    }
    return 0;
}