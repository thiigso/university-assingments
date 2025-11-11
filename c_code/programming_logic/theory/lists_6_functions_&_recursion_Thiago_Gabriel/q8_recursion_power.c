#include <stdio.h>


int powOwn(int x, int y){
    if(y ==1) return y+1;
    return x * powOwn(x,y-1);
}

int main(){

    int powered,powerOf;

    printf("Digite o valor a ser calculado a potencia e a potenciacao a ser feita: ");

    scanf("%d%d",&powered,&powerOf);

    printf("\n\nO valor e: %d",powOwn(powered,powerOf));



    return 0;
}