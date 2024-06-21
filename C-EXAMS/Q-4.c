#include <stdio.h>

void square_elements(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * *(arr + i);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    square_elements(arr, size);

    printf("squar of elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}