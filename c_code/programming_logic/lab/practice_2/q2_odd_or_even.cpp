#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero natural: ");
    scanf("%d",&num);

    if(num%2== 0) printf("\nO numero e par");
    else printf("\nO numero e impar");

    return 0;
}