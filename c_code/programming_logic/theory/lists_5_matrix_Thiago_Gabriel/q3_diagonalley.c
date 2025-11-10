#include <stdio.h>


#define LIN 5
#define COL 5


void leMatriz(int matriz[LIN][COL]){
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            printf("Digite o elemento %d %d: ",i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void printMatriz(int matriz[LIN][COL]){
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            printf("%3d",matriz[i][j]);
        }
        printf("\n");
    }
}

void checarDiagon(int matriz[LIN][COL]){
    int qtd=0;
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            if(i == j) 
                if(matriz[i][j] == 1) qtd++;
        }
    }

    if(qtd == LIN) printf("\nA matriz tem os valores da diagonal todos igual a 1.");
    else printf("\nA diagonal nao tem elementos todos iguais a 1.");
}


int main(){

    int matriz[LIN][COL];

    leMatriz(matriz);
    printMatriz(matriz);
    checarDiagon(matriz);





    return 0;
}