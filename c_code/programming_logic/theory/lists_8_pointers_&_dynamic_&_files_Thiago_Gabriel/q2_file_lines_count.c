#include <stdio.h>

int main() {
    FILE *arq;
    char c;
    int linhas = 0;

    arq = fopen("arquivo.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((c = fgetc(arq)) != EOF) {
        if (c == '\n') {
            linhas++;
        }
    }

    fclose(arq);

    printf("Quantidade de linhas: %d\n", linhas);

    return 0;
}
