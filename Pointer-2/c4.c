#include<stdio.h>


int *min (int *n1, int *n2){
    if(*n1 > *n2){
        return n2 ;
    }
    else{
        return n1 ;
    }
}

void main(){
    
    int a = 900;
    int b = 91;
    printf("%d", *min(&a,&b));
}

