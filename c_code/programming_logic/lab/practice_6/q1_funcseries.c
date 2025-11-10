#include <stdio.h>

float serie(int N){
    float serie = 0;
    for(int i=1; i<=N; i++){
        //printf("serie: %f - ",serie);
        serie+= (float)1/i;
        //printf("i: %d - serie: %f\n",i,serie);
    }
    return serie;
}


int main(){
    int N;

    printf("Digite o valor de N para ser calculado na serie: ");
    scanf("%d",&N);

    printf("O resultado da serie e: %f",serie(N));


    return 0;
}