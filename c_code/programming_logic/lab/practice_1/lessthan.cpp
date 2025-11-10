#include <stdio.h>

int main(){

    int n1, n2, n3;

    while(n1!=n2 && n2!=n3  && n1!=n3){
        scanf("%d %d %d",&n1,&n2,&n3);

        if(n1!=n2 && n2!=n3  && n1!=n3) break;
        else printf("Você deverá colocar 3 valores diferentes um do outro, tente novamente: ");
    }
    
    if(n1<n2 && n1<n3) printf("O menor valor é: %d", n1);
    else if(n2<n1 && n2<n3) printf("O menor valor é: %d", n2);
    else printf("O menor valor é: %d", n3);


    return 0;
}