#include <stdio.h>
#include <string.h>

const int N = 2;

struct telephone{
    int data;
    int hora;
    int numero;
    int duracao;
    char tipo[10];
};


void readStruct(struct telephone telVet[]){

    for(int i=0; i<N; i++){
        printf("\nDigite a data: ");
        scanf("%d",&telVet[i].data);
        printf("Digite a hora: ");
        scanf("%d",&telVet[i].hora);
        printf("Digite o numero: ");
        scanf("%d",&telVet[i].numero);
        printf("Digite a duracao: ");
        scanf("%d",&telVet[i].duracao);
        printf("Digite o tipo: ");
        getchar();
        fgets(telVet[i].tipo, 10, stdin);
        telVet[i].tipo[strcspn(telVet[i].tipo, "\n")] = '\0';

    }

}

void printStruct(struct telephone telVet[]){

    for(int i=0; i<N; i++){
        printf("\n\nData da ligacao %d: %d",i+1,telVet[i].data);
        printf("\nHora da ligacao %d: %d",i+1,telVet[i].hora);
        printf("\nNumero da ligacao %d: %d",i+1,telVet[i].numero);
        printf("\nDuracao da ligacao %d: %d",i+1,telVet[i].duracao);
        printf("\nDuracao o tipo da ligacao %d: %s",i+1,telVet[i].tipo);
    }

}

void calculateTelephone(struct telephone telVet[]){

    int originadas=0;
    int recebidas=0;
    int maior=0;
    
    for(int i=0; i<N; i++){
        if(strcmp("originada", telVet[i].tipo) == 0){
            originadas++;
        }
        if(strcmp("recebida", telVet[i].tipo) == 0){
            recebidas++;
        }
        if(telVet[i].duracao>maior){
            maior=i;
        }
    }

    printf("\n\nNumero de chamadas originadas: %d",originadas);
    printf("\nNumero de chamadas recebidas: %d",recebidas);

    printf("\n\nMaior Ligacao Data da ligacao %d: %d",maior+1,telVet[maior].data);
    printf("\nHora da ligacao %d: %d",maior+1,telVet[maior].hora);
    printf("\nNumero da ligacao %d: %d",maior+1,telVet[maior].numero);
    printf("\nDuracao da ligacao %d: %d",maior+1,telVet[maior].duracao);
    printf("\nDuracao o tipo da ligacao %d: %s",maior+1,telVet[maior].tipo);

}


int main(){

    struct telephone t[N];
    readStruct(t);
    printStruct(t);
    calculateTelephone(t);

    return 0;
}