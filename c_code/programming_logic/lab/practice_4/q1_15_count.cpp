#include <stdio.h> 

int main(){
    int conjunto[15], qtd=0;

    for(int i = 0; i<15; i++){
        printf("Digite valores inteiros: ");
        scanf("%d",&conjunto[i]);
    }

    for(int i=0; i<15;i++){
        printf("O valor %d apareceu nas posicoes: ", conjunto[i]);
        for(int j=0; j<15; j++){
            if(conjunto[i] == conjunto[j]){
                qtd++;
                printf("%d ", j);
            }
        }
        printf("| Totalizando %d vezes.\n", qtd);
        qtd = 0;
    }

    return 0;
}