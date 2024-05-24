#include<stdio.h>

int calculateArea(int w , int l){
    return w*l;
}
int main(){
    int w,l;
    printf("Enter Width : ");
    scanf("%d",&w);
    printf("Enter Length : ");
    scanf("%d",&l);
    printf("Area of Rectangle : %d",calculateArea(w,l));
    return 0;
}