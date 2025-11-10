#include <stdio.h>
#include <string.h>

#define TAM 4

int f(char palavra[], int i, int j){
    if (i>=j) return 1;
    if (palavra[i] != palavra[j]) return 0;
    else return (f(palavra, i+1, j-1));


}


int main(){

    char palavra[TAM];
    printf("Digite a palavra: ");
    gets(palavra);

    if(strlen(palavra) == 0) printf("\nPalavra Vazia");
    else{
        if(f(palavra, 0, strlen(palavra)-1)) printf("Verdadeiro");
        else printf("Falso");
    }


    return 0;
}