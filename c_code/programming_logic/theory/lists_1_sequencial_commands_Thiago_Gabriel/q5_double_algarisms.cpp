#include <stdio.h>

int main(){
    int unidades, dezenas, centenas;

    scanf("%d%d%d", &centenas, &dezenas, &unidades);

    printf("O dobro do numero e: %d", 2*(centenas*100+dezenas*10+unidades));

    return 0;
}