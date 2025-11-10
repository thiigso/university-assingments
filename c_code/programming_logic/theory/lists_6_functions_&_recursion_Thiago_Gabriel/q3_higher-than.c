#include <stdio.h>


int HigherNumber(int num1, int num2){
    if(num1>num2) return num1;
    else return num2;
}


int main(){
    int num1,num2;

    printf("Digite o valor dos dois numeros:\n\n");
    scanf("%d %d",&num1, &num2);

    printf("O maior numero e: %d",HigherNumber(num1,num2));

}