#include <stdio.h>

 main() {
    int a;
    float sum=0.0,averg;
    printf("Enter Size of Array:");
    scanf("%d",&a);
    
    float array[a];
    for(int i = 0; i < a; i++){
        printf("Enter Number %d:",i);
        scanf("%f",&array[i]);
        sum+= array[i];
        }
        averg = sum / a;
        printf("averg =%0.2f",averg);
}