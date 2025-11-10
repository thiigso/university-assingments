#include <stdio.h>

int main(){
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num>0) printf("\nO numero e positivo\n");
    else if (num==0) printf("\nO numero e nulo\n");
    else printf("\nO numero e negativo\n");

    return 0;
}