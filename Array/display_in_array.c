//Write a program to read and dsiplay n numbers using an array 
#include<stdio.h>

void main(){
    int i,n,A[20];
    printf("\nEnter the Number of Element in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nA[%d]:",i);
        scanf("%d",&A[i]);
    }
    printf("display the Array");
    for(i=0;i<n;i++){
        printf("\t %d",A[i]);
    }
}