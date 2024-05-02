#include<stdio.h>

main(){
    
    int factorial=1;
    int n;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++){
        factorial= factorial*i;
        printf("%d\n",factorial);
    }

    
}