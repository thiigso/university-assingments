#include <stdio.h>

int main(){

    int altura[50] = {0}, qtd_m=0, soma_m=0, maior_a=0;
    char sexo[50];

    while(altura[0]<=0){
        printf("Digite a altura e o sexo da primeira pessoa: ");
        scanf("%d %c", &altura[0], &sexo[0]);

        if(altura[0] <=0)
            printf("Valor invalido, digite novamente");
    }
    if(sexo[0] == 'h')
        maior_a = altura[0];
    else{
        qtd_m++;
        soma_m+=altura[0];
    }

    for(int i = 1; i<3; i++){

        while(altura[i]<=0){
            printf("Digite a altura e o sexo da %d pessoa: ",i);
            scanf("%d %c", &altura[i], &sexo[i]);

            if(altura[i] <=0)
                printf("Valor invalido, digite novamente");
        }

        if(sexo[i] == 'h'){
            if(altura[i] > maior_a) 
                maior_a = altura[i];
        }
        else{
            qtd_m++;
            soma_m+=altura[i];
        }

    }


    printf("A maior altura entre os homens e: %d\nA media da altura das mulheres e: %f", maior_a, (float)soma_m/qtd_m);

}