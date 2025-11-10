#include <stdio.h>

#define MAX 10

int main(){

    float vet[MAX], maior, menor;

    for(int i=0; i<MAX; i++){
        printf("Digite o %d preco: ", i);
        scanf("%f", &vet[i]);
        
        if(i == 0){
            maior = vet[i];
            menor = vet[i];
        }

        if(maior < vet[i]) maior = vet[i];
        if(menor > vet[i]) menor = vet[i];
    }


    printf("\nMaior preco: %f\nMenor preco: %f", maior,menor);

    return 0;
}