#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        sum += i;
        if (sum > 50) {
            sum -= i;
            break;
        }
    }

    printf("Sum of the first %d positive integers: %d\n", i - 1, sum);

    return 0;
}
