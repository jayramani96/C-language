#include<stdio.h>

int calculateSumOfSquares(int num){
    int sum = 0 , square = 0; 
    for(int i = 0 ; i <= num ; i++){
        if(i % 2 == 0){
            square = i * i;
            sum += square;
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter Value : ");
    scanf("%d",&n);
    printf("Sum of even number square : %d",calculateSumOfSquares(n));
    return 0;
}