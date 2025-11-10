#include <stdio.h>

int main(){

    int n1, n2, n3;

    while(true){
        scanf("%d %d %d",&n1,&n2,&n3);

        if(n1!=n2 && n2!=n3 && n1!=n3){
            if(n1<n2 && n1<n3) printf("O menor valor e: %d", n1);
            else if(n2<n1 && n2<n3) printf("O menor valor e: %d", n2);
            else printf("O menor valor e: %d", n3);
        }
        else {
            printf("Voce devera colocar 3 valores diferentes um do outro, tente novamente:\n");
        }
    }



    return 0;
}