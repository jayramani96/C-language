#include<stdio.h>

  main(){
    int A,B,C;
    
    printf("Enter first angle :");
    scanf("%d",&A);
     
    printf("Enter second angle :");
    scanf("%d",&B);

    C =180- (A+B);
    printf("Third angle is :%d",C);
}