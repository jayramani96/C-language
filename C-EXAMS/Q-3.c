#include <stdio.h>


int reverseNumber(int num) {
    if (num < 100 || num > 999) {
        printf("Error: The number is not a 3-digit number.\n");
        return -1;
    }
    
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    int reversed = ones * 100 + tens * 10 + hundreds;
    return reversed;
}

int main() {
    int number;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    int reversedNumber = reverseNumber(number);

    if (reversedNumber != -1) {
        printf("The reversed number is: %d\n", reversedNumber);
    }

    return 0;
}