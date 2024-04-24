#include<stdio.h>
main(){
    float salary,hra,da,ta,ans;
    printf("Enter Salary:");
    scanf("%f",&salary);
    hra=(salary*10)/100;
    ta=(salary*5)/100;
    da=(salary*8)/100;
    ans=salary+hra+da+ta;
    printf("Gross Salary:%f",ans);

}
