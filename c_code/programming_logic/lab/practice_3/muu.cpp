#include <stdio.h>

int main(){

    float id=0, idmaior=0, idmenor=0, peso, menor=0, maior=0, soma=0, qtd=0;

    while(true){
        printf("Digite o id e o peso do boi: ");
        scanf("%f %f", &id, &peso);

        if(id<0) printf("\nO id e negativo, digite um numero valido\n");
        else break;

    }

    maior = peso;
    idmaior = id;
    
    menor = peso;
    idmenor = id;

    while(id>0){

        if (peso>0){
        
            if(peso>maior) {
                maior = peso;
                idmaior = id;
            }
            else if(peso<menor){
                menor = peso;
                idmenor = id;
            }

            soma+=peso;
            qtd++;

        }

        printf("\nDigite o id e o peso do proximo boi: ");
        scanf("%f %f", &id, &peso);

        if(peso<=0){
            printf("\nO valor do peso nao pode ser negativo, digite um valor positivo\n");
            continue;
        }

    }

    printf("\n\nMaior peso: %f - Id do Boi: %f\nMenor peso:  %f - Id do Boi: %f\nMedia: %f",maior,idmaior,menor,idmenor,soma/qtd);

    return 0;
}