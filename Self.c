#include<stdio.h>
int main()
{
    char name[15], address[50], city[10];
    int Phone[10]; 
    printf("Enter your name\n");
    gets(name);
    printf("Enter your address\n");
    gets(address);
    printf("Enter your city\n");
    gets(name);
    printf("Enter your phone number\n");
    gets(Phone);
    printf("Name");
    puts(name);
    printf("Address");
    puts(address);
    printf("City:");
    puts(city);
    printf("Phone number:");
    puts(Phone);
    return 0;  
}
