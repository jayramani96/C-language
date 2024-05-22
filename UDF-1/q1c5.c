#include<stdio.h>

calculateSquare(int a){
    int total = a * a;
    printf("%d", total);
}

void main(){

    int a;
    printf("Enter calculateSquare of a : ");
    scanf("%d", &a);

     calculateSquare(a);

}