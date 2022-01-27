//Write a program to find second largest number in the given array..
#include<stdio.h>

 void main(){
     int larger_number,second_larger,i,n,A[20];
     printf("\nEnter the number of element in array:");
     scanf("%d",&n);
     for(i=0;i<n;i++){
         printf("A[%d]:",i);
         scanf("%d",&A[i]);
     }
     larger_number=A[0];
     for(i=1;i<n;i++){
         if(A[i]>larger_number){
             larger_number=A[i];
         }
     }
     second_larger=A[i];
     for(i=0;i<n;i++)
     {
         if(A[i]!=larger_number)
         {
             if(A[i]>second_larger){
                 if(A[i]>second_larger){
                     second_larger=A[i];
                 }
             }
         }
     }
printf("\n Enter the number you Enter are:");
for(i=0;i<n;i++){
    printf("\t %d",A[i]);
}
printf("\nThe largest number in the array is :%d",larger_number);
printf("\nThe second largest number in the array is:%d",second_larger);
 }