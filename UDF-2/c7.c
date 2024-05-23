#include<stdio.h>

int Square(int a,int b){
    int d= a * b;
    return d;
}

int main(){
     int a,b;
    printf("Enter the width: ");
    scanf("%d", &a);
    printf("Enter the length: ");
    scanf("%d", &b);

printf("Area of a Rectangle  =%d",Square(a,b));
return 0;
}