#include <stdio.h>
#include <math.h>

float deltaCalculator(float a, float b, float c){
    return (b*b)-4*a*c;
}

void rootCalculator(float a, float b, float c){
    float delta, x1, x2;

    delta = deltaCalculator(a,b,c);

    if(delta>=0){

        x1 = (-b +sqrt(delta))/(2*a);

        if(delta == 0){
            printf("\nO valor das raizes sao iguais e sao: %f",x1);
            return;
        }

        x2 = (-b -sqrt(delta))/(2*a);

        printf("\nO valor das raizes sao:\nx1: %f\nx2: %f",x1,x2);
    }
    else 
        printf("\nNao existe raiz com esses coeficientes.");    
}

int main(){

    float a,b,c;

    printf("Digite os coeficientes a b c:\n\n");
    scanf("%f%f%f",&a,&b,&c);
    rootCalculator(a,b,c);

    return 0;
}