#include <stdio.h>

#define TAMANHO 10


int main(){

    int vetor[TAMANHO];

    for(int i=0; i<TAMANHO; i++){
        printf("Digite o %d valor: ", i);
        scanf("%d",&vetor[i]);
    }
    printf("\n\nOs indices que obtiveram valores iguais a 30 foram: \n");

    for(int i=0; i<TAMANHO; i++) 
        if(vetor[i] == 30) 
            printf("%d ",i);


    return 0;
}