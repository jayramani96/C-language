#include<stdio.h>

divideNumbers(int a, int b){

    if(b == 0){
        printf("Error : Cannot divide by zero\n");
    }
    else{
        int total = a / b;
        printf("%d", total);
    }
   
}

void main(){

    int a, b;
    printf("Enter divideNumbers of a : ");
    scanf("%d", &a);

    printf("Enter divideNumbers of b : ");
    scanf("%d", &b);

     divideNumbers(a, b);

    

}