#include<stdio.h>

main(){
    
    char name[] = "hello world";
    for(int i=0; name[i] != NULL; i++){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] += 32;
        }
        printf("%c",name[i]);
    }
}