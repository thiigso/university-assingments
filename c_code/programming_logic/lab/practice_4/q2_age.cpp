#include <stdio.h> 

int main(){
    int conjunto[10], soma=0, qtd=0;;

    for(int i = 0; i<10; i++){
        printf("Digite valores inteiros: ");
        scanf("%d",&conjunto[i]);
        soma += conjunto[i];
    }

    for(int i=0; i<10;i++){
        if(conjunto[i]> soma/10){
            qtd++;
        }
    }

    printf("\n%d pessoas apresentam idade maior que a media %d", qtd, soma/10);

    return 0;
}