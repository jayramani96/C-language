#include<stdio.h>

int main(){

    int sum = 0;
    int arr [] ={5,6,7,8};
    for (int i=0; i<=3; i++){
        sum= sum + arr[i];
    }
    printf("%d\n",sum);

    return 0;
}