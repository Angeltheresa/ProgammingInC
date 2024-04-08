/*Copy*/
#include<stdio.h>
int main()
{    
int myArray[10],copyArray[10],i,n,big;   
printf("enter the size of the array");  
scanf("%d",&n);    
printf("enter the elements into the array");    
for(i=0;i<n;i++)   
{        
	scanf("%d",&myArray[i]);    
}    
for(i=0;i<n;i++)    
{         
 	 copyArray[i]=myArray[i];        
   }   
   
printf("\nElements of CopyArry\n");  
for(i=0;i<n;i++)    
{         
printf("%d\n",copyArray[i]);     
   }   
return 0;   
 }