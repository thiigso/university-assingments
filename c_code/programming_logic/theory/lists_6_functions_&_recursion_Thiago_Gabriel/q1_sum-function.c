#include <stdio.h>

int Sum(int num1, int num2){
    return num1+num2;
}


int main(){
    int num1, num2;

    printf("Digite o valor dos numeros:\n\n");
    scanf("%d %d",&num1,&num2);

    printf("\nA soma dos valors e: %d",Sum(num1,num2));


}