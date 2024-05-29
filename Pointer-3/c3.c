#include<stdio.h>

main(){

    char array[]= "Jay";
    char *p;
    p=&array;
    for(int i=0; array[i] != NULL; i++){
        printf("%u %c\n",p+i,*(p+i));
    }

}