#include <stdio.h>
#include<math.h>

int main(){
    float lado1,lado2,lado3,perimetro,area;


    printf("Digite os tres lados do triangulo: ");
    scanf("%f%f%f", &lado1,&lado2,&lado3);




    if(lado1<lado1+lado2 && lado2<lado1+lado3 && lado3<lado1+lado2){
        
        perimetro = (lado1+lado2+lado3)/2;
        area= sqrt(perimetro*(perimetro-lado1)*(perimetro-lado2)*(perimetro-lado3));

        printf("\nIsso e um triangulo! Ele e: ");
        //printf("%d",perimetro);

        if((lado1==lado2 && lado1!= lado3) || (lado1==lado3 && lado1!=lado2) || (lado2==lado3 && lado2!=lado1))
            printf("Isoceles e tem area: %f", area);
        else if(lado1==lado2 && lado1==lado3)
            printf("O triangulo e equilatero e tem area: %f", area);
        else
            printf("O triangulo e escaleno e tem area %f", area);
        
    }
    else printf("\nOs lados do triangulo sao invalidos");

    return 0;
}