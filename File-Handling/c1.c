#include<stdio.h>

main(){

    FILE *p;
    char data[100];
    p=fopen("demo.txt","a");

    if(p == NULL){
        printf("connot access!");
    }
    else{
        printf("Dekhai de rahi hai file\n");
        printf("Enter your name : ");

        gets(data);
        fputs(data,p);

    }

    while(fgets(data, 50, p) != NULL){
        printf("%s",data);
    }
}