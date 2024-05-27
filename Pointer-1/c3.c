#include <stdio.h>

main(){
    int a = '2';
    float b = '3.14';
    char c = 'Y';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("%u %d\n", a, *p1);
    printf("%u %f\n", b, *p2);
    printf("%u %c\n", c, *p3);
}