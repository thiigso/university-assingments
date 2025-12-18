#include <stdio.h>
#include <string.h>

#define MAX 50
#define CLIENTES 3
int clientQtd = 0;

void clearBuffer(){
    int ch;
    while((ch = getchar()) != '\n' && ch != EOF);
}

void stripNewLine(char vector[]){
    vector[strcspn(vector,"\n")] = 0;
}

typedef struct{
    int tel;
    int cpf;
    int idade;
    char nome[MAX];
}clients;


void addClient(clients vector[]){
   
    if(clientQtd <= CLIENTES){

        printf("Digite o nome da pessoa: ");
        clearBuffer();
        fgets(vector[clientQtd].nome,sizeof(vector->nome),stdin);
        stripNewLine(vector[clientQtd].nome);
        printf("Digite o restante: ");
        scanf("%d %d %d",&vector[clientQtd].cpf,&vector[clientQtd].idade,&vector[clientQtd].tel);

    }


    clientQtd++;
}

void listClients(clients vector[]){

    for(int i=0; i<clientQtd; i++){
        printf("%s\n%d\n%d\n%d\n",vector[i].nome,vector[i].cpf,vector[i].idade,vector[i].tel);
    }
}

void searchClients(clients vector[]){

    char nameTemp[MAX];
    printf("Digite o nome a procurar: ");
    clearBuffer();
    fgets(nameTemp,sizeof(nameTemp),stdin);
    stripNewLine(nameTemp);

    for(int i=0; i<clientQtd; i++){
        if(!strcmp(vector[i].nome, nameTemp)){
            printf("%s\n%d\n%d\n%d\n",vector[i].nome,vector[i].cpf,vector[i].idade,vector[i].tel);
        }
    }
}

int main(){

    int opc;
    clients catalogo[CLIENTES];

    do{

    printf("\nO que voce deseja fazer?\n1- Incluir cliente.\n2- Listar cliente.\n3-Pesquisar cliente por nome.\n4- Sair do menu.\n\n");
    scanf("%d",&opc);

    switch(opc){
        case 1:
            addClient(catalogo);
            break;
        case 2:
            listClients(catalogo);
            break;
        case 3:
            searchClients(catalogo);
            break;
        case 4:
            break;
        default:
            break;
    }

    }while(opc != 4);










}