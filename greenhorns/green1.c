#include<stdio.h>


  main(){
    int salary,
    HRA,
    DA,
    Ans,
    TA;
    
    printf("Enter your salary :");
    scanf("%d",&salary);
     HRA = (salary*10)/100;
     DA = (salary*5)/100;
     TA = (salary*8)/100;
     Ans = salary+HRA+DA+TA;
    
     printf("%d",Ans);

}