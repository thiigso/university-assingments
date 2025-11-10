#include <stdio.h>

int main(){
    int numero, centenas, dezenas, unidades;

    scanf("%d", &numero);

    unidades= (numero%10);
    dezenas= (numero%100-unidades)/10;
    centenas = (numero-dezenas-unidades)/100;

    printf("centenas: %d\ndezenas: %d\nunidades: %d\n", centenas, dezenas, unidades);


    return 0;
}