#include <stdio.h>

 main() {
    int a,count=0;
    
    printf("Enter Size of Array:");
    scanf("%d",&a);
    
    char array[a];
    for(int i = 0; i < a; i++){
        printf("Enter Character %d:",i);
        scanf(" %c",&array[i]);
    }
    for(int i=0;i<a;i++){
        if(array[i] == 'a' || array[i] == 'e'|| array[i] == 'i' || array[i] == 'o' || array[i] == 'u'){
            printf("%c\n",array[i]);
            count++;
        }
    }
    printf("count of vowel %d",count);
        
        
}