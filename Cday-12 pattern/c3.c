#include<stdio.h>

int main(){

    for(int row=6; row>=1; row--){
        for(int col=6; col>=row; col--){
            printf("%d ",col);
        }
        printf("\n");
    }
}