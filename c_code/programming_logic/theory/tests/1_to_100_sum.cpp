#include <stdio.h>

int main(){
    int num=2;

    do{
        (num++)-1;
        printf("%d\n", num);
    }while(num<=100);
    
    return 0;
}