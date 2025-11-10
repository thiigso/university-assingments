#include <stdio.h>

int main(){

    int N, num=0;

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        printf("%d ",num);
        
        if(i % 2 == 0)
            num+=5;
        else
            num+=1;
    }

    return 0;
}