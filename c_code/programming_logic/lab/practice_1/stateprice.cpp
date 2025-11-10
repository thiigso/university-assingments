#include <stdio.h>

int main(){

    float P, codigo;

    scanf("%f %f",&P,&codigo);

    switch(codigo){

        case 1: printf("O valor da passagem é: %f", P + P*0.3);
        break;

        case 2: printf("O valor da passagem é: %f", P + P*0.5);
        break;

        case 3: printf("O valor da passagem é: %f", P + P*0.4);
        break;

        case 4: printf("O valor da passagem é: %f", P + P*0.2);
        break;

        case 5: printf("O valor da passagem é: %f", P + P*0.2);
        break;
        
        default: printf("Digite um número válido");
    }

    return 0;
}