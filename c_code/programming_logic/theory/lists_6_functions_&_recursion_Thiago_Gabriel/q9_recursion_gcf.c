#include <stdio.h>

int Mdc(int A, int B){
    if(A == B) return A;
    else if(A > B) return Mdc(A-B,B);
    else return Mdc(A,B-A);
}

int main(){

    int A,B;

    printf("Digite os valores a serem calculados o MDC:\n \n");
    scanf("%d%d",&A,&B);

    printf("\nO calculo do Mdc e: %d",Mdc(A,B));

    return 0;
}