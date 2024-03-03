/*to enter a char and print it as vowel or consonant*/
#include<stdio.h>
int main() { 
char letter;
printf("Enter the character:  ");
scanf("%c",&letter);
switch(letter)
 {
     case 'a':
     printf("Vowel");
     break;
     case 'e':
     printf("Vowel");
     break;
     case 'i':
     printf("Vowel");
     break;
     case 'o':
     printf("Vowel");
     break;
     case 'u':
     printf("Vowel");
     break;
     default:
     printf("Consonant");
 }
return 0;
}
