#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    int total = 0, fem = 0, masc = 0, maiorIdade = 0;
    int femCond = 0, mascCond = 0;

    while (1) {
        scanf(" %c", &sexo);
        scanf(" %c", &olhos);
        scanf(" %c", &cabelos);
        scanf("%d", &idade);

        if (idade <= 0) break;

        if (!(sexo == 'F' || sexo == 'M' || sexo == 'O')) continue;
        if (!(olhos == 'V' || olhos == 'A' || olhos == 'C' || olhos == 'P')) continue;
        if (!(cabelos == 'C' || cabelos == 'R' || cabelos == 'L' || cabelos == 'P')) continue;

        total++;
        if (sexo == 'F') fem++;
        if (sexo == 'M') masc++;
        if (idade > maiorIdade) maiorIdade = idade;

        if (sexo == 'F' && idade >= 18 && idade <= 40 && (cabelos == 'P' || cabelos == 'L'))
            femCond++;

        if (sexo == 'M' && idade >= 18 && idade <= 40 && olhos == 'V')
            mascCond++;
    }

    printf("Total de habitantes: %d\n", total);
    printf("Total de mulheres: %d\n", fem);
    printf("Total de homens: %d\n", masc);
    printf("Maior idade: %d\n", maiorIdade);
    if (fem > 0)
        printf("Percentual mulheres (18-40, cabelos P/L): %.2f%%\n", (femCond * 100.0) / fem);
    else
        printf("Percentual mulheres (18-40, cabelos P/L): 0.00%%\n");
    if (masc > 0)
        printf("Percentual homens (18-40, olhos V): %.2f%%\n", (mascCond * 100.0) / masc);
    else
        printf("Percentual homens (18-40, olhos V): 0.00%%\n");

    return 0;
}
