#include <stdio.h>

int main() {
    FILE *arq;
    char c;
    int cont = 0;

    arq = fopen("arquivo.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((c = fgetc(arq)) != EOF) {
        cont++;
    }

    fclose(arq);

    printf("Quantidade de caracteres: %d\n", cont);

    return 0;
}
