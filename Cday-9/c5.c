#include<stdio.h>

int main(){

    int i,a ;
    printf("Enter First number:");
    scanf("%d",&i);
    printf("Enter second number:");
    scanf("%d",&a);
    while (i<=a){
        printf("%d\n",i);
        i+=4;
    }
    return 0;
}