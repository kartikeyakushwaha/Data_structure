//write a program to find the mean of n numbers using arrays...
#include<stdio.h>

void main(){
    int i ,n,A[20],mean,sum=0;
    printf("Enter the number of element in the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    mean=sum/n;
    printf("The mean of Array:");
    printf("%d",mean);

}