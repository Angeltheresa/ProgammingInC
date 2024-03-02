/*days of the week*/
#include<stdio.h>
int main() 
{
    int day;
    printf("Enter the day number: ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
    }

    return 0;
}




/*student marklist*/
#include<stdio.h>

int main()
{
    char name[50];
    int regnum, sem, sub1, sub2, sub3, total;
    float average, marks;

    printf("Name: ");
    scanf("%s", name);
    printf("Register number: ");
    scanf("%d", &regnum);
    printf("Semester: ");
    scanf("%d", &sem);
    printf("Enter the marks: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    average = total / 3.0; 

    if (average > 90) 
    {
        printf("Grade 'O'\n");
    } 
    else if (average > 85)
    {
        printf("Grade 'A'\n");
    } 
    else if (average > 80) 
    {
        printf("Grade 'B'\n");
    } 
    else if (average > 70)
    {
        printf("Grade 'C'\n");
    } 
    else if (average > 50) 
    {
        printf("Grade 'D'\n");
    } 
    else 
    {
        printf("Grade 'F'\n");
    }

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %f\n", average);

    return 0;
}


/*student marklist using switch*/

#include<stdio.h>
int main()
{
    char name[50];
    int regnum, sem, sub1, sub2, sub3, total;
    float average, marks;

    printf("Name: ");
    scanf("%s", name);
    printf("Register number: ");
    scanf("%d", &regnum);
    printf("Semester: ");
    scanf("%d", &sem);
    printf("Enter the marks: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    average = total / 3.0; 
      printf("Grade: ");
    switch ((int)average / 10) {
        case 10:
        case 9:
            printf("'O'\n");
            break;
        case 8:
            printf("'A'\n");
            break;
        case 7:
            printf("'B'\n");
            break;
        case 6:
            printf("'C'\n");
            break;
        case 5:
            printf("'P'\n");
            break;
        default:
            printf("'F'\n");
    }

    return 0;
}