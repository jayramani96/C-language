#include<stdio.h>

int Square(int a){
    int d= a * a;
    return d;
}

int main(){
     int a;
    printf("Enter the first number: ");
    scanf("%d", &a);

printf("SQUARE =%d",Square(a));
return 0;
}