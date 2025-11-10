#include <stdio.h>

int main(){

    float raio, volume;

    scanf("%f", &raio);
    
    volume = 4.0/3.0*3.14*raio*raio*raio;
    printf("O volume e: %f",volume);
    return 0;
}