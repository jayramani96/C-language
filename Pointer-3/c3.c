#include<stdio.h>

main(){

    char array[]= "Harsh";
    char *p;
    p=&array;
    for(int i=0; array[i] != NULL; i++){
        printf("%u %c\n",p+i,*(p+i));
    }

}