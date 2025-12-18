#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int num;

    printf("numero\n");
    scanf("%d",&num);
    printf("%d",factorial(num));
}