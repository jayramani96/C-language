#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

  
    printf("Enter a number: ");
    scanf("%d", &number);

  
    lastDigit = number % 10;

 
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

   
    sum = firstDigit + lastDigit;


    printf("The sum of first and last digit is: %d\n", sum);

    return 0;
}
