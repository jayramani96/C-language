#include<stdio.h>

main(){
    int a=2,j;
    printf("Enter any number : ");
    scanf("%d\n",&j);
        do{
            printf("%d\n",a);
            a+=2;
        }while(a<=j);
    }
