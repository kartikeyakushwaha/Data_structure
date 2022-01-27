#include<stdio.h>

void func(int num);

void main()
{ 
    int i,A[10],num;
printf("Enter the number of element in the array");
scanf("%d",&num);
for(i=0;i<num;i++){
    printf("A[%d]:",i);
    scanf("%d",&A[i]);
    func(A[3]);
}
void func(int num)
{
    printf("%d",num);
}

}

