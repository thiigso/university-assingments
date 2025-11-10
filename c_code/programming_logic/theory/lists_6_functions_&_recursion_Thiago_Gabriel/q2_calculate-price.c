#include <stdio.h>

int calculaPrecoTotal(int Preco, int Impostos){
    return Preco+Preco*Impostos;
}

int main(){
    int price, tax;

    printf("Digite o preco: ");
    scanf("%d",&price);
    printf("Digite o valor do imposto: ");
    scanf("%d",&tax);

    printf("\nO preco total e: %d",calculaPrecoTotal(price,tax));

}