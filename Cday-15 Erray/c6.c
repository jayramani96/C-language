#include<stdio.h>
int main(){

    int size;
    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size];

    for (int index = 0; index < size; index++)
    {
        printf("Enter the value of arr[%d] : ", index);
        scanf("%d",&arr[index]);
    }

    int max = arr[0];

    for(int index = 0; index < size; index++){
        if(arr[index] > max){
            max = arr[index];
        }
    }

    printf("\nThe maximum value : %d", max);
}


// #include<stdio.h>

// int main(){
     
//     int arr[] = {45,200,7,400};
    
//     int max = arr[0];

//     for(int i=1; i<=3; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     printf("%d \n",max);
//     return 0;
// }