#include <stdio.h>

struct student {
    char name[30];
    int age;
    int class_number;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student stud[n]; 

    printf("Enter the details of the students\n");

    for (i = 0; i < n; i++) {
        printf("Enter the name: ");
        scanf("%s", stud[i].name);
        printf("Enter the age: ");
        scanf("%d", &stud[i].age);
        printf("Enter the class: ");
        scanf("%d", &stud[i].class_number);
    }

    printf("The details are:\n");
    printf("-----------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%s\t %d\t %d\n", stud[i].name, stud[i].age, stud[i].class_number);
    }

    return 0;
}
