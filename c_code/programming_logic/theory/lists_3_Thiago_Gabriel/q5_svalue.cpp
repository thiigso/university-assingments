#include <stdio.h>


int main(){
    int N, deno; 
    float serie=0.0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);


    while(N>=1){
        deno=1.0;

        for(int i=N; i>1; i--){
            deno *= i;
        }

        serie+=(1.0/deno);

        N--;

    }

    printf("O valor da serie e: %f", serie);


    return 0;
}