#include <stdio.h>

int main (){
    unsigned long soma=0;
    int N;

    scanf("%d", &N);
    for(int i=2; i<N; i+=2){
        soma += i;
        printf("%d - %lu\n", i, soma);
    }
    printf("A soma e: %lu", soma);
    
    return 0;
}