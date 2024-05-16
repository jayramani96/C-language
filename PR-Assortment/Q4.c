#include<stdio.h>
int main(){
    int rowCount, colCount, num = 1, opt, r, c, sum;

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
        printf("\n");
    }

    while(num == 1){
        printf("Enter 1 for col-Sum or 2 for row-Sum : ");
        scanf("%d",&opt);

        switch(opt){
            case 1:
                sum = 0;
                printf("\nEnter the number of columns : ");
                scanf("%d",&c);

                printf("\n");
                for (int row = 0; row < rowCount; row++){
                    
                    printf("%d\t", number[row][c]);
                    sum += number[row][c];
                }

                printf("\nThe sum of col-%d is: %d\n", c, sum);

                printf("\nEnter 1 if you want to continue else enter 0 : ");
                scanf("%d",&num);
                printf("\n");
                break;

            case 2:
                sum = 0;
                printf("\nEnter the number of row : ");
                scanf("%d",&r);
                printf("\n");
                for (int col = 0; col < colCount; col++){
                    
                    printf("%d\t", number[r][col]);
                    sum += number[r][col];
                }

                printf("\nThe sum of row-%d is: %d\n", r, sum);

                printf("\nEnter 1 if you want to continue else enter 0 : ");
                scanf("%d",&num);
                printf("\n");
                break;

            default:
                printf("\nInvalid Input\n");
        }
    }
    return 0;
}