//write a program to find the whether the array of intergers contain a duplicate number
#include<stdio.h>
void main(){
    int n,i,j,same_number,A[20];
    printf("\nEnter the number of Element of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nA[%d]:",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i]==A[j]&& i!=j){
                printf("\nThe Duplicate index is %d and %d the duplicate number is :%d",i,j,A[i]);
            }
        }
    }
}