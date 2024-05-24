#include<stdio.h>

calculateFactorial(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact *= i;
   }
   return fact;
}
int main(){
    int n;
    printf("Enter Positive Number : ");
    scanf("%d",&n);
    printf("Factorial Number : %d",calculateFactorial(n));
    return 0;
}