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

    int min = arr[0];

    for(int index = 0; index < size; index++){
        if(arr[index] < min){
            min = arr[index];
        }
    }

    printf("\nThe minimum value : %d", min);
}



// #include<stdio.h>

// int main(){
     
//     int arr[] = {45,200,7,400};
    
//     int min = arr[0];

//     for(int i=1; i<=3; i++){
//         if(arr[i] > min){
//             min = arr[i];
//         }
//     }
//     printf("%d \n",min);
//     return 0;
// }