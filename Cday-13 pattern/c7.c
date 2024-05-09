#include<stdio.h>

int main(){
    for(int i=5; i>=1; i--){
        for(int s=1; s<=5; s++){
            printf("");

        }
        for(int j=1; j<=i; j++){
            printf(" %d",j);
        }
        printf("\n");
    }

    for(int i=2; i<=5; i++){
        for(int s=5; s>=1; s--){
            printf("");

        }
        for(int j=1; j<=i; j++){
            printf(" %d",j);
        }
        printf("\n");
    }
}