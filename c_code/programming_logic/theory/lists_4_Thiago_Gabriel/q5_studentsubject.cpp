#include <stdio.h>

#define MAX 3

int main(){

    int vet_1[MAX], vet_2[MAX];

    for(int i=0; i<MAX; i++){
        printf("Digite o %d aluno da disciplina A: ", i+1);
        scanf("%d",&vet_1[i]);
        printf("Digite o %d aluno da disciplina B: ", i+1);
        scanf("%d",&vet_2[i]);
    }

    printf("\nAlunos que estudam as duas disciplinas:\n");

    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            if(vet_1[i] == vet_2[j]) printf("%d",vet_1[i]);
        }
    }

    return 0;
}