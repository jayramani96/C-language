#include <stdio.h>
main() {
    int r,c,sum=0;
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
    
    for(int i=0;i<r;i++){
        
            sum+=array[i][c - 1 - i];
         }
      printf("%d\n",sum);
}