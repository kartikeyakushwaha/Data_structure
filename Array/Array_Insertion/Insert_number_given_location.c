//write a program to insert a given number location in array ??
#include<stdio.h>

void main(){
    int n,i,A[20],m;
    printf("\nEnter the number of Element in the Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nA[%d]:",i);
        scanf("%d",&A[i]);
    }
    printf("\nEnter the index number where new element is add:");
    scanf("%d",&m);
    if(m>n){
        scanf("%d",&A[m]);
    }
    else if(m<n)
    { 
        for(i=m;i<n;i++)
    {
        A[i+1]=A[i];
        n++;
    }
    scanf("%d",&A[m]);

    }
    printf("\nThe Enter Array is :");
    for(i=0;i<n;i++){
        printf("\t%d",A[i]);
    }


}/////not completed
