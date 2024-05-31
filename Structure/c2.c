#include<stdio.h>
#include<string.h>

struct Employ{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    char expirience[100];
    char company_name[100];
}s[100];

main(){
    int n;
    printf("Enter Size Of An Array : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter ID : ");
        scanf("%d", &s[i].id);

        printf("Enter NAME : ");
        scanf("%s", &s[i].name);

        printf("Enter AGE : ");
        scanf("%d", &s[i].age);

        printf("Enter ROLE : ");
        scanf("%s", &s[i].role);

        printf("Enter CITY : ");
        scanf("%s", &s[i].city);

        printf("Enter EXPIRIENCE : ");
        scanf("%s", &s[i].expirience);

        printf("Enter  COMPANY_NAME: ");
        scanf("%s", &s[i].company_name);

        printf("\n");

    }
    for(int i = 0; i < n; i++){
        printf("ID : %d\n NAME : %s\n AGE : %d\n ROLE : %s\n CITY : %s\n EXPIRIENCE : %s\n COMPANY_NAME : %s\n", s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].expirience,s[i].company_name);
    }

}
