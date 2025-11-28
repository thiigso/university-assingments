#include <stdio.h>

const int N = 2;

struct funcionario{
    int matricula;
    char nome[50];
    float salario;
};


void readStruct(struct funcionario funcVet[]){

    for(int i=0; i<N; i++){
        printf("Digite o numero de matricula: ");
        scanf("%d",&funcVet[i].matricula);
        printf("Digite o nome: ");
        getchar();
        fgets(funcVet[i].nome, 50, stdin);
        printf("Digite o salario: ");
        scanf("%f",&funcVet[i].salario);
        printf("\n\n");

    }

}

void printStruct(struct funcionario funcVet[]){

    for(int i=0; i<N; i++){
        printf("Matricula do funcionario %d: %d",i+1,funcVet[i].matricula);
        printf("\nNome do funcionario %d: %s",i+1,funcVet[i].nome);
        printf("Salario do funcionario %d: %f\n\n",i+1,funcVet[i].salario);
    }

}


int main(){

    struct funcionario f[N];
    readStruct(f);
    printStruct(f);

    return 0;
}