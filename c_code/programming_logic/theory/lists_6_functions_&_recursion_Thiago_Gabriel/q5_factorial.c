#include <stdio.h>

long int factorial(int num){
    if(num == 1) return num;
    return num * factorial(num-1);
}

int main(){

    int num;

    printf("Digite o seu numero: ");
    scanf("%d",&num);

    printf("\nO fatorial desse numero e: %ld",factorial(num));

    return 0;
}