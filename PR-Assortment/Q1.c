#include<stdio.h>

 main(){
     
     int a;
     printf("Enter Array Size : ");
     scanf("%d", &a);
     int array[a];
     for(int i=0; i<a; i++){
        printf("Enter Element : ");
        scanf("%d", &array[i]);
     }
     for(int i=0; i<a; i++){
        if(array[i]<0){
            printf("Nagative Element : %d \n", array[i]);
        }
     }
     
 }