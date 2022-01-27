//Write a program for Merging the two unsorted array
#include<stdio.h>
void main(){
    int i,j,k,n,m,a,A[20],B[20],C[30];
    
    //Enter the Element of First array
    printf("\nEnter the number of Element in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nA[%d]:",i);
        scanf("\n%d",&A[i]);
    }
    //Enter the Element of Second Array
    printf("\nEnter the Number of Element in the Array");
    scanf("\n%d",&m);
    for(i=0;i<m;i++){
        printf("\nB[%d]:",i);
        scanf("\n%d",&B[i]);
    }
//Enter the Element of both array in the third array
for(i=0;i<n;i++)
{  
    C[k]=A[i];
 k++;
}
for(i=0;i<m;i++){
    C[k]=B[i];
    k++;
}
a=n+m;
printf("\n The merged array is");
for(i=0;i<a;i++){
    printf("\n C[%d]:%d",i,C[i]);
}
}