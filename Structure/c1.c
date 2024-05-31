#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[100];
    int age;
    char course[100];
    char city[100];
    int standard;
    char school[100];
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

        printf("Enter COURSE : ");
        scanf("%s", &s[i].course);

        printf("Enter CITY : ");
        scanf("%s", &s[i].city);

        printf("Enter STANDARD : ");
        scanf("%d", &s[i].standard);

        printf("Enter SCHOOL : ");
        scanf("%s", &s[i].school);


    }
    for(int i = 0; i < n; i++){
        printf("ID : %d\n NAME : %s\n AGE : %d\n COURSE : %s\n CITY : %s\n STANDARD : %d\n SCHOOL : %s\n", s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard,s[i].school);
    }

}
