#include <stdio.h>

float LeNotas(){
    float nota, rg=0, menorNota;


    for(int i=0; i<3; i++){
        printf("\nDigite a %d nota: ",i+1);
        scanf("%f",&nota);

        if(i==0) menorNota = nota;
        if(nota < menorNota) menorNota = nota;
        
        rg+= nota;
    }
    rg-=menorNota;
    return rg;
}

char conceito(float nota){
    if(nota>= 90) return 'A';
    if(nota>= 80 && nota< 90) return 'B';
    if(nota>= 70 && nota< 80) return 'C';
    if(nota>= 60 && nota< 70) return 'D';
    if(nota< 60 && nota>= 0) return 'I';
    else printf("\nNota invalida\n");
    return 'U';
}


int main (){
    int opcao;
    float rglocal;

    do{
        printf("O que voce deseja fazer:\n\n1.Analisar nota e conceito.\n2.Sair do programa.\n\n");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                rglocal = LeNotas();
                printf("\n\nA nota global do aluno foi: %f\n", rglocal);
                printf("O conceito do aluno foi: %c\n\n", conceito(rglocal));
                continue;
            case 2:
                break;

        }
    }while(opcao != 2);
    

    return 0;
}