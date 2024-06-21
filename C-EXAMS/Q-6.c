#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    char role[50];
} Employee;

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

   
    Employee *employees = malloc(numEmployees * sizeof(Employee));

    
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Role: ");
        scanf("%s", employees[i].role);
    }

    
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

   
    for (int i = 0; i < numEmployees; i++) {
        fprintf(file, "Employee %d\n", i+1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role: %s\n", employees[i].role);
        fprintf(file, "\n");
    }

   
    fclose(file);

    
    free(employees);

    printf("Data written to data.txt successfully.\n");

 return 0;
}