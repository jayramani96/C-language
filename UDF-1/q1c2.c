#include<stdio.h>

addNumbers(int a, int b){
    int total = a * b;
    printf("%d", total);
}

void main(){

    int a, b;
    printf("Enter addNumber of a : ");
    scanf("%d", &a);

    printf("Enter addNumber of b : ");
    scanf("%d", &b);

     addNumbers(a, b);

    

}