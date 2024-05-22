#include<stdio.h>

calculateCube(int a){
    int total = a * a * a;
    printf("%d", total);
}

void main(){

    int a;
    printf("Enter calculateCube of a : ");
    scanf("%d", &a);

     calculateCube(a);

    

}