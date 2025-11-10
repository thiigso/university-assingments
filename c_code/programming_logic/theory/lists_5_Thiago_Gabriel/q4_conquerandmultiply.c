#include <stdio.h>

#define LIN1 3
#define COL1 2

#define LIN2 2
#define COL2 2


void leMatriz(int lin, int col, int matriz[lin][col]){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            printf("Digite o valor %d %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
}


void printMatriz(int lin, int col, int matriz[lin][col]){

    printf("\n");
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void multiplicaMatriz(int lin1, int col1, int matriz1[lin1][col1], int lin2, int col2, int matriz2[lin2][col2],int lin3, int col3, int matriz3[lin3][col3]){
    int p00=0,p01=0,p10=0,p11=0,p20=0,p21=0;

    for(int i=0; i<1; i++){
        for(int j=0; j<col3; j++){
            p00+= matriz1[i][j] * matriz2[j][i];
            p01+= matriz1[i][j] * matriz2[j][1];
            p10+= matriz1[1][j] * matriz2[j][i];
            p11+= matriz1[1][j] * matriz2[j][1];
            p20+= matriz1[2][j] * matriz2[j][i];
            p21+= matriz1[2][j] * matriz2[j][1];

            //printf("i=%d j=%d  p00 %d - p01 %d - p10 %d - p11 %d\n",i,j,p00,p01,p10,p11);
        }
    }
    
    matriz3[0][0] = p00;
    matriz3[0][1] = p01;
    matriz3[1][0] = p10;
    matriz3[1][1] = p11;
    matriz3[2][0] = p20;
    matriz3[2][1] = p21;
}

int main(){


    int m1[LIN1][COL1], m2[LIN2][COL2], m3[LIN1][COL2];

    leMatriz(LIN1,COL1,m1);
    leMatriz(LIN2,COL2,m2);

    printMatriz(LIN1,COL1,m1);
    printMatriz(LIN2,COL2,m2);

    multiplicaMatriz(LIN1,COL1,m1,LIN2,COL2,m2,LIN1,COL2,m3);

    printMatriz(LIN1,COL2,m3);


    return 0;
}