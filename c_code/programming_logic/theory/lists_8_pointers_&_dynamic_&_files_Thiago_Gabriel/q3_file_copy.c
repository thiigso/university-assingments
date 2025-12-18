#include <stdio.h>

int main() {
    FILE *origem, *destino;
    char c;

    origem = fopen("origem.txt", "r");
    destino = fopen("destino.txt", "w");

    if (origem == NULL || destino == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    while ((c = fgetc(origem)) != EOF) {
        fputc(c, destino);
    }

    fclose(origem);
    fclose(destino);

    printf("Arquivo copiado com sucesso.\n");

    return 0;
}
