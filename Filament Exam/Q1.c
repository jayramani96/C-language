#include<stdio.h>

main(){

    char name[100];
    int length = 0, palindrome = 1;
    printf("Enter Any String : ");
    gets(name);
    while(name[length] != '\0'){
        length++;
    }

    for(int i = 0 ; i < length/2 ; i++){
        if (name[i] != name[length - i - 1]){
            palindrome = 0;
            break;
        }
    }
    if (palindrome){
        printf("Given string is a Palindrome.");
    }
    else{
        printf("Given string is a not Palindrome.");
    }
    
}