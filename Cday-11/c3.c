#include<stdio.h>

 int main(){
    for(int i=1; i<=20; i++){
        if(i == 13){
            continue;
        }
        if(i % 2 != 0){
            printf("%d \n",i);
        }
    }
 }