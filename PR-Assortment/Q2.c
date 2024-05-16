#include<stdio.h>
int main(){
    int rowCount, colCount;

    printf("Enter the size of a Row : ");
    scanf("%d", &rowCount);

    printf("Enter the size of a Column : ");
    scanf("%d", &colCount);

    int number[rowCount][colCount];

    for (int row = 0; row < rowCount; row++){
        for (int col = 0; col < colCount; col++){
            printf("Enter the value of number[%d][%d] : ", row, col);
            scanf("%d",&number[row][col]); 
        }
    }

    int max = number[0][0];

    for (int row = 0; row < rowCount; row++){
        for (int col = 0; col < colCount; col++){
            if(number[row][col] > max){
                max = number[row][col];
            }
        }
    }

    printf("The largest number in this 2D-array is : %d", max);

    return 0;
}