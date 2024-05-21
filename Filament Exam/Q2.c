#include<stdio.h>
int main(){
    char str[100];
    int frequency[256] = {0};
    printf("Enter Any String : ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
    }
    printf("Character Frequency\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("%c \t %d\n", i, frequency[i]);
        }
    }
    return 0;
}