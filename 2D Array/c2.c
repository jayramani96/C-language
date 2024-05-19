#include <stdio.h>
main() {
    int r,c;
    printf("Enter number of Rows:");
    scanf("%d",&r);
    printf("Enter number of Columns:");
    scanf("%d",&c);
    
    int array[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter value of [%d] [%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    float sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=array[i][j];
        }
    }
   printf("%0.1f",sum);
   
}