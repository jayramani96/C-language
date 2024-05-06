#include<stdio.h>

 int main(){
    int count=0;
    for (int i=1; i<=80; i++){
        if(i % 8 == 0){
            printf("%d \n",i);
            count++;
        }
        if(count == 5){
            break;
        }
    }
 }