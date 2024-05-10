#include <stdio.h>

int main() {
    int a = 5;
    int b = 11;
    int i, j;

    for (i = 0; i < a; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }

    return 0;
}
