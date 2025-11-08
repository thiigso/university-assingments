#include <stdio.h>
#inlcude <math.h>

int main(){

    float A, B, C, bha, r1, r2;

    scanf("%d %d %d",&A,&B,&C);

    bha=B*B-4*A*C;

    if(bha==0){
        r1 = (-B+sqrt(bha))/2*A;
        printf("Tem 1 raiz real: %f", r1);
    }
    else if(bha>0){
        r1 = (-B+sqrt(bha))/2*A;
        r2 = (-B-sqrt(bha))/2*A;
        printf("Tem 2 raizes reais: \n1.%f\n2.%f", r1,r2);

    }
    else printf("Não existe raiz real.")

    return 0;
}