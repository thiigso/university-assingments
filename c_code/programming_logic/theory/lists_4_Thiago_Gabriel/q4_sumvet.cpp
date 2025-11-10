#include <stdio.h>

#define MAX 10

int main(){

    int vet_1[MAX], vet_2[MAX], vet_3[MAX];

    for(int i=0; i<MAX; i++){
        printf("Digite o %d valor do vetor 1: ",i+1);
        scanf("%d", &vet_1[i]);
    }

    for(int i=0; i<MAX; i++){
        printf("Digite o %d valor do vetor 2: ",i+1);
        scanf("%d", &vet_2[i]);
    }


    for(int i=0; i<MAX; i++){
        vet_3[i]=vet_1[i]+vet_2[i];
        printf("%d ",vet_3[i]);
    }





    return 0;
}