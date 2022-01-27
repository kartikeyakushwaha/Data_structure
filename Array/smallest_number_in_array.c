//Write a Program to print the position of the smallest number of n number using array..
#include<stdio.h>
void main(){
    int i,n,A[10],smallestNumber;
    printf("\nEnter the Number of Element in the array");
    scanf("%d",&n);
    printf("\nEnter the element in Array");
    for(i=0;i<n;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
    }
    
    smallestNumber=A[0];
    for(i=0;i<n;i++)
    {
        if(smallestNumber>A[i])
        {
            smallestNumber=A[i];
        }
    }
    printf("\nEnter the number smallest number in the Array:%d",smallestNumber);
}