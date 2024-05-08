#include<stdio.h>

int main(){
     
     int a=70;
    for(int i=65; i<=70; i++){
        for(int j=a; j>=65; j--){
            printf("%c ",j);
        }
        a--;
        printf("\n");
    }
}