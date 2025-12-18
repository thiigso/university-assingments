#include <stdio.h>

struct Mercadoria {
    int codigo;
    char nome[50];
    float preco;
};

int main() {
    FILE *origem, *destino;
    struct Mercadoria m;

    origem = fopen("mercadorias.bin", "rb");
    destino = fopen("mercadorias_maior_100.bin", "wb");

    while (fread(&m, sizeof(struct Mercadoria), 1, origem)) {
        if (m.preco > 100.0) {
            fwrite(&m, sizeof(struct Mercadoria), 1, destino);
        }
    }

    fclose(origem);
    fclose(destino);

    printf("Arquivo gerado com sucesso.\n");

    return 0;
}
