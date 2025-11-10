#include <stdio.h>

int main(){

    int n1, n2, n3;

    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1<n2 && n1<n3)
        if(n2<n3) printf("A ordem descrescente e: \n1: %d\n2: %d\n3: %d", n3,n2,n1);
        else printf("A ordem descrescente e: 1: %d\n2: %d\n3: %d", n2,n3,n1);
    else if(n2<n1 && n2<n3)
        if(n1<n3) printf("A ordem descrescente e: \n1: %d\n2: %d\n3: %d", n3,n1,n2);
        else printf("A ordem descrescente e: \n1: %d\n2: %d\n3: %d", n1,n3,n2);
    else 
        if(n1<n2) printf("A ordem descrescente e: \n1: %d\n2: %d\n3: %d", n2,n1,n3);
        else printf("A ordem descrescente e: \n1: %d\n2: %d\n3: %d", n1,n2,n3);


    return 0;
}