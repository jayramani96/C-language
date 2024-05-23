#include <stdio.h>

int factorial(int n) {
    if (n == 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; 
    }

    int result = factorial(num);
    
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}
