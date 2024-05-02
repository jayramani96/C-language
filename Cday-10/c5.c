#include<stdio.h>

main(){
    
    int sum=0;
    int n;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++){
        sum= sum+i;
        printf("%d\n",sum);
    }

    
}