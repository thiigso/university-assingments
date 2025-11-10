#include <stdio.h>

#define LINHAS 5
#define COLUNAS 7

void PreencherMatriz(int mat[LINHAS][COLUNAS]){
    for(int i=0; i<LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            mat[i][j] = i*j;
        }
    }
}

void PrintarMatriz(int mat[LINHAS][COLUNAS]){
    for(int i=0; i<LINHAS; i++){
        for(int j=0; j<COLUNAS; j++){
            printf("%3d",mat[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int matriz[LINHAS][COLUNAS];

    PreencherMatriz(matriz);
    PrintarMatriz(matriz);


    return 0;
}