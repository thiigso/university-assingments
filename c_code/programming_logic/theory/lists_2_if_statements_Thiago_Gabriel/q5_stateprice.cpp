#include <stdio.h>

int main(){

    int codigo;
    float P;

    scanf("%f %d",&P,&codigo);

    switch (codigo) {

        case 1: printf("O valor da passagem e: %f", P + P*0.3);
        break;

        case 2: printf("O valor da passagem e: %f", P + P*0.5);
        break;

        case 3: printf("O valor da passagem e: %f", P + P*0.4);
        break;

        case 4: printf("O valor da passagem e: %f", P + P*0.2);
        break;

        case 5: printf("O valor da passagem e: %f", P + P*0.2);
        break;
        
        default: printf("Digite um numero valido");
    }

    return 0;
}