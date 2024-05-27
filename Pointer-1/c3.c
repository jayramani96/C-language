#include <stdio.h>

main(){
    int a = 2;
    float b = 3.14;
    char c = 'Y';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of integer :  %p %d\n",p1,*p1);
    printf("Value of float :    %u %.2f\n",p2,*p2);
    printf("Value of charcter : %x %c\n",p3,*p3);
}