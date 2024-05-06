#include<stdio.h>

 int main(){
    for(int i=20; i<=30; i++){
        if(i % 2 == 0){
            if(i == 24){
            continue;
            }
            printf("%d \n", i);
        }
        
    }
 }