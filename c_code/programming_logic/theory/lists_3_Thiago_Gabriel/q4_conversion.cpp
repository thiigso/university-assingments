#include <stdio.h>

int main() {
    int f;
    double c;

    scanf("%d %lf", &f, &c);

    for (f = 50; f <= 150; f++) {
        c = 5.0 * (f - 32) / 9.0;
        printf("%d F = %.2f C\n", f, c);
    }
    return 0;
}
