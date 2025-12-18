#include <stdio.h>

struct Mercadoria {
    int codigo;
    char nome[50];
    float preco;
};

int main() {
    FILE *arq;
    struct Mercadoria m;
    int opcao, cod, encontrado;

    do {
        printf("\n1 - Cadastrar mercadoria");
        printf("\n2 - Consultar mercadoria por codigo");
        printf("\n0 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            arq = fopen("mercadorias.bin", "ab");

            printf("Codigo: ");
            scanf("%d", &m.codigo);
            printf("Nome: ");
            scanf(" %[^\n]", m.nome);
            printf("Preco: ");
            scanf("%f", &m.preco);

            fwrite(&m, sizeof(struct Mercadoria), 1, arq);
            fclose(arq);

            printf("Mercadoria cadastrada com sucesso!\n");
        }

        else if (opcao == 2) {
            arq = fopen("mercadorias.bin", "rb");
            encontrado = 0;

            printf("Informe o codigo: ");
            scanf("%d", &cod);

            while (fread(&m, sizeof(struct Mercadoria), 1, arq)) {
                if (m.codigo == cod) {
                    printf("\nProduto encontrado:");
                    printf("\nCodigo: %d", m.codigo);
                    printf("\nNome: %s", m.nome);
                    printf("\nPreco: R$ %.2f\n", m.preco);
                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado) {
                printf("\nMercadoria nao encontrada.\n");
            }

            fclose(arq);
        }

    } while (opcao != 0);

    return 0;
}
