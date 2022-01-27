//write a program to delete the number which has same element in it..
#include<stdio.h>
 int main(){
     int i,n,A[10],j,pos,duplicate,flag=0;
  printf("\nEnter the number of element in the array:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      printf("A[%d]:",i);
      scanf("%d",&A[i]);
  }
  //finding a duplicate number in the array
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          flag=1;
          if(A[i]==A[j]&&i!=j){
              printf("\nThe Enter duplicate number in the array is :%d and %d",i,j);
              pos=i;
         }
  }
 }
 for(i=pos;i<n-1;i++){
     A[i]=A[i+1];
     n--;
 }
 printf("Array after deletion the duplicate number:");
 for(i=0;i<n;i++){
     printf("\t%d",A[i]);
 }
 return 0;
     }
 


















