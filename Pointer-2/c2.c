#include<stdio.h>


void swap (int *n1, int *n2){
    int *t;
    t = n1;
    n1 = n2;
    n2 = t;
    printf("a => %d b => %d", *n1, *n2);
}

void main(){
    
    int a = 90;
    int b = 91;
    swap(&a, &b);

}

