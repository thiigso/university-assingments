#include <stdio.h>

#define ITENS 10
#define COLUNAS 2

int checar(int cod, int qtd, int mat[ITENS][COLUNAS]){

    for(int i=0; i<ITENS; i++)
        if(mat[i][0] == cod){
            if(mat[i][1] >= qtd){
                return 1;
            }
            else 
                return 0;
        }
    return 0;
}

int comprar(int cod, int qtd, int mat[ITENS][COLUNAS]){

    for(int i=0; i<ITENS; i++){
        if(mat[i][0] == cod){
            mat[i][1]-=qtd;
        }
    }
    return 0;
}

void popular(int mat[ITENS][COLUNAS]){

    for(int i=0; i<ITENS; i++){
        printf("Digite o codigo do %d item: ",i+1);
        scanf("%d", &mat[i][0]);
        printf("Digite  quantidade do %d item: ", i+1);
        scanf("%d", &mat[i][1]);
    }

}

void mostrar(int mat[ITENS][COLUNAS]){

    for(int i=0; i<ITENS; i++){
        printf("Item %d -- %d\n", mat[i][0],mat[i][1]);
    }

}




int main(){

    int matriz[ITENS][COLUNAS];
    int opcao;

    popular(matriz);

    do{

        int codigo, quantidade;

        printf("O que voce deseja fazer:\n\n1:Comprar um item.\n2:Mostrar os itens.\n3.Sair do mercado\n\n");
        scanf("%d",&opcao);

        switch(opcao){

            case 1: 
                printf("\nDigite o codigo do item: ");
                scanf("%d",&codigo);
                printf("Digite a quantidade do item: ");
                scanf("%d",&quantidade);

                if(checar(codigo, quantidade, matriz)){
                    comprar(codigo, quantidade, matriz);
                }
                else{
                    printf("A quantidade nao e suficiente, escolha outro produto ou mude a quantidade.\n\n");
                    continue;
                }
                break;
                
            case 2:
                mostrar(matriz);
                printf("\n");
                continue;

            case 3: 
                break;

        }






    }while(opcao != 3);






    return 0;
}