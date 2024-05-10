#include<stdio.h>

int main(){

   int number;

   printf("Enter a Number : ");
   scanf("%d",&number);

   number == 0 ? printf("%d is a neutral number", number) : number > 0 ? printf("%d is a positive number", number) : printf("%d is a nagative number", number);

   return 0;
}