#include <stdio.h>

 main() {
    int a;
    
    printf("Enter Size of Array:");
    scanf("%d",&a);
    
    char array[a];
    for(int i = 0; i < a; i++){
        printf("Enter Character %d:",i);
        scanf(" %c",&array[i]);
    }
    for(int i=0;i<a;i++){
       printf("%c\n",array[i]);
        }
   
        
        
}