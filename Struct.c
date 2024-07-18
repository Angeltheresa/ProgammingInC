#include <stdio.h>

struct emp {
    char name[30];
    int id;
    int salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct emp emps[n]; 

    for (int i = 0; i < n; i++) {
        printf("\nEnter the details for the employee %d: \n", i + 1);
        printf("Name: ");
        scanf("%s", emps[i].name); 
        printf("ID: ");
        scanf("%d", &emps[i].id);
        printf("Salary: ");
        scanf("%d", &emps[i].salary);
    }

    printf("\nDetails of %d employee(s):\n", n);
    printf("\nName\tID\tSalary\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%d\n", emps[i].name, emps[i].id, emps[i].salary);
    }

    return 0;
}