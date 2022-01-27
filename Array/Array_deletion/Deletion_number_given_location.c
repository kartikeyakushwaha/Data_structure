//Write a program to delete a number in the given location..
#include<stdio.h>

void main()
{
    int pos,i,n,A[10];
    printf("\nEnter the number of element in the array:");
    scanf("%d",&n);
     for(i=0;i<n;i++){
         printf("A[%d]:",i);
         scanf("%d",&A[i]);
     }
     printf("\nEnter the position to delete element in array");
     scanf("%d",&pos);
         for(i=pos;i<n-1;i++){
         A[i]=A[i+1];
         n--;
         }
     }
     printf("\nThe array after deletions are:");
     for(i=0;i<n;i++){
         printf("\t%d",A[i]);
     }
}