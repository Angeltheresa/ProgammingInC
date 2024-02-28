#include<stdio.h>
int main()
{
    int rollnumber, subject1, subject2, subject3, percentage, total;
    char name[50];
    printf("Name: ");
    scanf("%s",name);
    printf("Roll No: ");
    scanf("%d",&rollnumber);
    printf("Marks in the first subject: ");
    scanf("%d", &subject1);
    printf("Marks in the second subject: ");
    scanf("%d", &subject2);
    printf("Marks in the third subject: ");
    scanf("%d", &subject3);
    total = subject1+subject2+subject3;
    percentage=(total/300.0)*100;
    printf("Roll Number: %d\n", rollnumber);
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %d%%\n", percentage);
    if (percentage >= 75)
    {
        printf("First Class with Distinction\n");
    } 
    else if (percentage >= 60 && percentage<75) 
    {
        printf("First Class\n");
    }
     else 
    {
        printf("Second Class\n");
    }

    return 0;
}