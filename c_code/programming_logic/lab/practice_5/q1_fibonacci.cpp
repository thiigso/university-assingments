#include <stdio.h>

int main(){

    int N, anterior=1, posterior=1, temp=0;

    scanf("%d",&N);

    printf("%d ", anterior);

    for(int i=1; i<N; i++ ){
        printf("%d ",posterior);
        temp = posterior;
        posterior+= anterior;
        anterior = temp;

    }


    return 0;
}