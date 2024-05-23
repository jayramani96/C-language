#include <stdio.h>

int count_vowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int vowels = count_vowels(str);

    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}