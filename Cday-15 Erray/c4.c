
#include<stdio.h>
int main(){

    int size;
    int number = 1;

    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size];

    for (int index = 0; index < size; index++)
    {
        printf("Enter the value of arr[%d] : ", index);
        scanf("%d",&arr[index]);
    }

    for (int index = 0; index < size; index++)
    {
        if(arr[index] % 2 != 0){
            printf("Odd number %d : %d\n", number++, arr[index]);
        }
    }

    return 0;
}



// #include<stdio.h>

// int main(){
     
//     int arr[] = {1,2,7,4};
//     for(int i=0; i<=3; i++){
//         if(arr [i] % 2 != 0){
//             printf("%d\n",arr[i]);
//         }
//     }

//     return 0;
// }