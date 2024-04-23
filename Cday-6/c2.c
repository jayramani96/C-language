#include<stdio.h>
main(){
    int numb;
    printf("Enter any number :");
    scanf("%d",&numb);
    
    if (numb == 0){
        printf ("This is number Natural");
    }
    else if(numb > 0){
        printf("This is number positive");
    }
    else{
        printf("This is number nagative");
    }
    
}

