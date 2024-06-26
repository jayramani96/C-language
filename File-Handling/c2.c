#include <stdio.h>

int main() {
    FILE *fp;
    int num;

    fp = fopen("numbers.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (num = 1; num <= 50; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            fprintf(fp, "%d\n", num);
        }
    }


    fclose(fp);

    printf("Data written to file successfully!\n");

    return 0;
}
