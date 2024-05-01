// Write a program to read and display an array
#include<stdio.h>
void main (){
    int n,A[20],i;
    printf("Enter the size of an array");
    scanf("%d,&n");
    for(i=0;i<n;i++);{
        printf("Enter the number");
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}

// Write a program to read and display an array in reverse order
#include<stdio.h>
void main(){
    int n,A[20],i;
    printf("Enter the size of an array");
    scanf("%d",&n);
    for(i=0;i<n;i--){
        printf("Enter the number");
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i--){
        printf("%d\t",A[i]);
    }
}

// write a program to find the sum and average of a number
#include<stdio.h>
void main(){
    int n,sum=0,A[20],i;
    float avg;
    printf("Enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number");
        scanf("%d",&A[i]);
    }
    sum=0;
    for(i=0;i<n;i++){
        sum+=i;
    }
    avg=sum/n;
    printf("Sum=%d",sum);
    printf("Average=%f",avg);

}

// Write a program to read and display even numbers in an array
#include<stdio.h>
void main (){
    int n,A[20],i;
    printf("Enter the size of an array");
    scanf("%d,&n");
    for(i=0;i<n;i++);{
        printf("Enter the number");
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        if(A[i]%2==0);
        {
           printf("%d\t",A[i]); 
        }
        
    }
}
