#include <stdio.h>

int main(){
    
    int idade,vaga,tempo;
    int total_v1=0, total_v2=0, maior_idade, menor_idade;
    float soma_idade=0, soma_tempo_1=0, soma_tempo_2=0;

    do{
        printf("1.Vaga: ");
        scanf("%d",&vaga);

        if(vaga != 1 && vaga != 2) break;

        printf("2.Idade: ");
        scanf("%d",&idade);
        printf("3.Tempo (horas): ");
        scanf("%d",&tempo);
        
        if(total_v1==0 && total_v2==0){
            maior_idade=idade;
            menor_idade=idade;
        }
        if(vaga==1){
            total_v1++;
            soma_tempo_1+=tempo;
        }
        else{
            total_v2++;
            soma_tempo_2+=tempo;
        }

        if(idade>maior_idade) maior_idade=idade;
        else if(idade<menor_idade) menor_idade=idade;

        soma_idade+=idade;

    }while(vaga==1 || vaga==2);

    
    printf("\n\nTotal de candidatos vaga 1: %d", total_v1);
    printf("\nTotal de candidatos vaga 2: %d", total_v2);
    printf("\nA media da idade dos canditados e: %f",soma_idade/(total_v1+total_v2));
    printf("\nA maior idade e: %d", maior_idade);
    printf("\nA menor idade e: %d", menor_idade);
    printf("\nA media de tempo de exp dos candidatos da vaga 1 e: %f",soma_tempo_1/total_v1);
    printf("\nA media de tempo de exp dos candidatos da vaga 2 e: %f",soma_tempo_2/total_v2);

    return 0;
}