#include <stdio.h>

 int main() {
    
    int count=0 , n;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    do{
        n /= 10;
        count++;
    }while(n != 0);
    printf("Total Number Digit : %d",count);
     
     return 0;
}
