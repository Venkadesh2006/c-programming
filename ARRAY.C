#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[10],arr2[10],arr3[10],arr4[10],n,i,j,k,sum=0;
clrscr();
printf("enter how many numbers:\n",n);
scanf("%d",&n);
printf("array 1:");
for(i=0;i<n;i++)
{
scanf("\t%d",&arr1[i]);
}
printf("\narray 2:");
for(i=0;i<n;i++)
{
scanf("%d\t",&arr2[i]);
}
printf("\narray 3:");
for(i=0;i<n;i++)
{
sum=arr1[i]+arr2[i];
arr3[i]=sum;
printf("\t%d",arr3[i]);
}
getch();
}