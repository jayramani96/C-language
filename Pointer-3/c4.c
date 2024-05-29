#include<stdio.h>

main() {
    char *str = "Jay Ramani";
    char *ptr[9]; 
       for(int i = 0; str[i] != '\0'; i++) {
        ptr[i] = &str[i];
          printf("%u %c\n",i, *ptr[i]);
    }
}