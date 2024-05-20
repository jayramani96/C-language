#include<stdio.h>

main(){

    char name[100];
    char firstName[100] = "jay";
    char lastName[100] = "ramani";
    char fullName[100];

    strcpy(fullName, strcat (firstName,lastName));
    puts(fullName);
}