#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100

typedef struct {
    char cpf[20];
    char nome[100];
    char telefone[30];
    int idade;
} Cliente;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int incluir(Cliente clientes[], int n) {
    if (n >= MAX_CLIENTES) {
        printf("Limite de clientes atingido.\n");
        return n;
    }

    printf("CPF: ");
    fgets(clientes[n].cpf, 20, stdin);
    clientes[n].cpf[strcspn(clientes[n].cpf, "\n")] = '\0';

    printf("Nome: ");
    fgets(clientes[n].nome, 100, stdin);
    clientes[n].nome[strcspn(clientes[n].nome, "\n")] = '\0';

    printf("Telefone: ");
    fgets(clientes[n].telefone, 30, stdin);
    clientes[n].telefone[strcspn(clientes[n].telefone, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &clientes[n].idade);
    limpar_buffer();

    return n + 1;
}

void listar(Cliente clientes[], int n) {
    if (n == 0) {
        printf("Nenhum cliente cadastrado.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\nCliente %d\n", i + 1);
        printf("CPF: %s\n", clientes[i].cpf);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Telefone: %s\n", clientes[i].telefone);
        printf("Idade: %d\n", clientes[i].idade);
    }
}

void pesquisar(Cliente clientes[], int n) {
    char busca[100];

    printf("Digite o nome para buscar: ");
    fgets(busca, 100, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    int encontrou = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(clientes[i].nome, busca) == 0) {
            printf("\nCliente %d\n", i + 1);
            printf("CPF: %s\n", clientes[i].cpf);
            printf("Nome: %s\n", clientes[i].nome);
            printf("Telefone: %s\n", clientes[i].telefone);
            printf("Idade: %d\n", clientes[i].idade);
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Cliente nao encontrado.\n");
}

int main() {
    Cliente clientes[MAX_CLIENTES];
    int total = 0, opcao;

    do {
        printf("\n1 - Incluir cliente");
        printf("\n2 - Listar clientes");
        printf("\n3 - Pesquisar cliente por nome");
        printf("\n0 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
        limpar_buffer();

        if (opcao == 1)
            total = incluir(clientes, total);
        else if (opcao == 2)
            listar(clientes, total);
        else if (opcao == 3)
            pesquisar(clientes, total);
        else if (opcao != 0)
            printf("Opcao invalida.\n");

    } while (opcao != 0);

    return 0;
}
