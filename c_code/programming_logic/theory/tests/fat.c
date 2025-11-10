#include <stdio.h>


long fat(int n){
    if(n==-1)
        return -1;
    else
        return n * fat(n-1);
}



int main(){

    printf("fat de -4 e: %ld",fat(-4));


    return 0;
}