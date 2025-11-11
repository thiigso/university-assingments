#include <stdio.h>

float temperatureConverter(float F){
    return ((5.0/9)*(F-32));
}

int main(){

    float farenheit;

    printf("Digite a temperatura em farenheit: ");
    scanf("%f",&farenheit);

    printf("\nA temperatura em Celsius e: %f",temperatureConverter(farenheit));


    return 0;
}