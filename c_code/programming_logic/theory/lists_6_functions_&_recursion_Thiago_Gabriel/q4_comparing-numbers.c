#include <stdio.h>

void comparingNumbers(int num1, int num2){
    if(num1 == num2) printf("Os numeros sao iguais.");
    else if(num1 > num2)printf("\n1Maior numero: %d\nMenor numero: %d",num1,num2);
    else printf("\n2Maior numero: %d\nMenor numero: %d",num2,num1);
}


int main(){

    int num1,num2;

    printf("Digite os numero:\n\n");
    scanf("%d %d",&num1,&num2);

    comparingNumbers(num1,num2);

    return 0;
}