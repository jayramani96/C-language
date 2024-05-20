#include<stdio.h>

main(){

    char name[100];
    printf("Enter your name : ");
    gets(name);
    puts(strlwr(name));

}