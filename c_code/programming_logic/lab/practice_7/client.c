#include <stdio.h>
#include <string.h>

#define MAX 3

int structQtd = 0;

typedef struct {
    int cpf;
    int telefone;
    char nome[50];
    int idade;
}pessoa;


void clearBuffer(){
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}


void addClient(pessoa vector[]){

    if(structQtd >= MAX){
        printf("A lista ja esta cheia, nao e possivel adicionar mais clientes\n");
        return;
    }
    else{

    clearBuffer();
    printf("Digite o nome da pessoa: ");
    fgets(vector[structQtd].nome, sizeof(vector[structQtd].nome),stdin);
    vector[structQtd].nome[strcspn(vector[structQtd].nome,"\n")] = 0;
    printf("Digite o numero de cpf: ");
    scanf("%d",&vector[structQtd].cpf); 
    printf("Digite o numero de telefone da pessoa: ");
    scanf("%d",&vector[structQtd].telefone);
    printf("Digite a idade da pessoa: ");
    scanf("%d",&vector[structQtd].idade); 

    structQtd++;
        
    }
}

void listClient(pessoa vector[]){

    for(int i=0; i<structQtd; i++){
        printf("Pessoa %d\nNome: %s\nCPF: %d\nNumero: %d\nIdade: %d\n\n",i+1, vector[i].nome, vector[i].cpf, vector[i].telefone, vector[i].idade);
    }

}

void searchCient(pessoa vector[]){
    int searchQtd = 0;
    char nomeTemp[50];
    
    printf("Digite o nome a ser procurado na lista: ");
    clearBuffer();
    fgets(nomeTemp, sizeof(nomeTemp),stdin);
    nomeTemp[strcspn(nomeTemp, "\n")] = 0;

    for(int i=0; i<structQtd; i++){

        if(!strcmp(nomeTemp, vector[i].nome)){
            printf("Pessoa %d\nNome: %s\nCPF: %d\nNumero: %d\nIdade: %d\n\n",i+1, vector[i].nome, vector[i].cpf, vector[i].telefone, vector[i].idade);
            searchQtd++;
        }
    }

    if(searchQtd == 0) printf("\nO nome descrito nao foi encontrado na lista.\n");

}


int main(){

pessoa Clientes[MAX];
int select;


do{
    printf("\nO que voce deseja fazer?\n1- Incluir cliente.\n2- Listar cliente.\n3-Pesquisar cliente por nome.\n4- Sair do menu.\n\n");
    scanf("%d",&select);
    
switch(select){
    case 1:
    addClient(Clientes);
    break;
    case 2:
    listClient(Clientes);
    break;
    case 3:
    searchCient(Clientes);
    break;
    case 4:
    break;
    default:
    printf("Digite um comando valido.");
    break;


}



}while(select != 4);

}