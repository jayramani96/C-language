#include<stdio.h>

main(){

    int i = 1, j;
    printf("Enter j number:");
    scanf("%d",&j);
    while(i<=j){
        printf("%d\n",i);
        i++;
    }
}