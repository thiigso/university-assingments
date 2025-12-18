#include <stdio.h>

int main() {
    int N;

    // Read the size of the vectors
    scanf("%d", &N);

    int v1[N], v2[N], v3[N];
    int *p1 = v1, *p2 = v2, *p3 = v3;

    // Read first vector
    for (int i = 0; i < N; i++) {
        scanf("%d", p1 + i);
    }

    // Read second vector
    for (int i = 0; i < N; i++) {
        scanf("%d", p2 + i);
    }

    // Sum vectors using pointers
    for (int i = 0; i < N; i++) {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    // Print resulting vector
    for (int i = 0; i < N; i++) {
        printf("%d ", *(p3 + i));
    }

    return 0;
}
