#include<stdio.h>

int main(){

    int sum = 0;
    int arr [] ={1,2,7,4,10};
    for (int i=0; i<=4; i++){
        sum= (sum + arr[i]) % 5;
    }
    printf("%d\n",sum);

    return 0;
}