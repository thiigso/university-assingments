#include <stdio.h>
#include <string.h>

const int N = 2;

struct vehicle{
    int placa;
    char modelo[10];
    char cor[10];
    char tipo[10];
};

void strip_newline(char *s){
    s[strcspn(s, "\n")] = '\0';
}

void readStruct(struct vehicle vehiVet[]){

    for(int i=0; i<N; i++){
        printf("\nDigite o numero da placa: ");
        scanf("%d",&vehiVet[i].placa);
        getchar();
        printf("Digite o numero do modelo: ");
        fgets(vehiVet[i].modelo, 10, stdin);
        strip_newline(vehiVet[i].modelo);
        printf("Digite a cor: ");
        fgets(vehiVet[i].cor, 10, stdin);
        strip_newline(vehiVet[i].cor);
        printf("Digite o tipo: ");
        fgets(vehiVet[i].tipo, 10, stdin);
        strip_newline(vehiVet[i].tipo);

    }

}

void printStruct(struct vehicle vehiVet[]){

    for(int i=0; i<N; i++){
        printf("\n\nPlaca do carro %d: %d\n",i+1,vehiVet[i].placa);
        printf("Modelo do carro %d: %s",i+1,vehiVet[i].modelo);
        printf("\nCor do carro %d: %s",i+1,vehiVet[i].cor);
        printf("\nTipo do carro %d: %s\n\n",i+1,vehiVet[i].tipo);
    }

}

void printEqualStruct(struct vehicle vehiVet[]){

    char modelTemp[10];
    printf("\n\nInforme um modelo: ");
    fgets(modelTemp, 10, stdin);
    strip_newline(modelTemp);

    for(int i=0; i<N; i++){
        if(strcmp(modelTemp, vehiVet[i].modelo) == 0){
            printf("\nPlaca do carro %d: %d",i+1,vehiVet[i].placa);
            printf("\nModelo do carro %d: %s",i+1,vehiVet[i].modelo);
            printf("\nCor do carro %d: %s",i+1,vehiVet[i].cor);
            printf("\nTipo do carro %d: %s\n\n",i+1,vehiVet[i].tipo);
        }
    }

}


int main(){

    struct vehicle v[N];
    readStruct(v);
    printStruct(v);
    printEqualStruct(v);

    return 0;
}