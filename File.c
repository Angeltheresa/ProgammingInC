#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int c=0,word=0,line=1;
    fp=fopen("hi.txt","r");
    if (fp==NULL){
        printf("Error in opening the file");
        return 1;
    }
    printf("\nThe data in file is:\n");
    while((ch=getc(fp))!=EOF)
        printf("%c",ch);
    fclose(fp);
    fp=fopen("hi.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        c++;
        if ((ch==' ')||(ch=='.'))
        {
            word++;
        }
        if (ch=='\n')
        {
            line++;
        }
    }
    fclose(fp);
    printf("\nThe no of characters:%d\n The no of words: %d\nThe no of lines: %d",c,word,line);
    return 0;    
}


#include <stdio.h>
int main() {
    FILE *fp;
    char A[100],ch;
    fp=fopen("file.txt","w");
    printf("Enter the string: ");
    scanf("%[^\n]",A);
    fprintf(fp,"%s",A);
    fclose(fp);
    fp=fopen("file.txt","r");
    printf("\n The entered data is:");
    while((ch=getc(fp))!=EOF)
    printf("%c",ch);
    fclose(fp);
    printf("\n To append");
    fp=fopen("file.txt","a");
    printf("\nEnter the string:");
    scanf(" %[^\n]",A);
    fprintf(fp,"%s",A);
    fclose(fp);
    fp=fopen("file.txt","r");
    printf("\nThe data in file is:");
    while((ch=getc(fp))!=EOF)
    printf("%c",ch);
    fclose(fp);
    return 0;
}