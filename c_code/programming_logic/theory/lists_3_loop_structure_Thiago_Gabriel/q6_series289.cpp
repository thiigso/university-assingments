#include <stdio.h>

int main(){

    int num=289, dec=33;

    while(num >= 1){

        printf("%d ",num);
        num-=dec;
        dec-=2;

    }

    return 0;
}