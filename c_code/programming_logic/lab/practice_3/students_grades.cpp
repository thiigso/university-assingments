#include <stdio.h>

int main(){
    float nota=0, menor=0, maior=0, soma=0, qtd=0;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    maior=nota;
    menor=nota;

    while(nota>0){
        if(nota>maior) maior = nota;
        else if(nota<menor) menor = nota;

        soma+= nota;
        qtd++;

        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
    }

    printf("\n\nMaior nota: %f\nMenor nota: %f\nMedia: %f\n",maior,menor,soma/qtd);

    return 0;
}