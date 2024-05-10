#include<stdio.h>

int main(){

    int unit;
    float bill, surcharge;

    printf("Enter the number of units: ");
    scanf("%d" , &unit);

    if(unit <= 50){
        bill = unit * 0.50;
    }
    else if(unit > 50 && unit <= 150){
        bill = 50 * 0.50 + 100 * 0.75 + (unit - 250) * 1.20;
    }
    else if(unit > 150 && unit <= 250){
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit -250) * 1.50;
    }

    surcharge = (bill * 20) / 100;
    bill = bill + surcharge;

    printf("The total electricity bill is: %2f", bill);
}