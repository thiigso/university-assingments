#include <stdio.h>

#define QUESTOES 10
#define PROVAS 5

int main(){

    char gabarito[QUESTOES], resposta;
    int erradas, certas;

    for(int i=0; i<QUESTOES; i++){
        printf("Gabarito questao %d: ", i+1);
        scanf(" %c",&gabarito[i]);

        if(gabarito[i] != 'V' && gabarito[i] != 'F') {
            printf("\nUtilize somente respostas V ou F\n");
            i--;
        }
    }

    for(int i=0; i<PROVAS;i++){
        erradas=0;
        certas=0;
        for(int j=0; j<QUESTOES; j++){
            printf("Prova %d questao %d: ", i+1, j+1);
            scanf(" %c", &resposta);

            if(resposta == gabarito[j]){
                certas++;
            }
            else erradas++;
        }
        printf("\nProva 1\ncertas: %d\nerradas: %d\n\n",certas, erradas);
    }



    return 0;
}