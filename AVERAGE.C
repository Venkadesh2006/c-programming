#include<stdio.h>
#include<conio.h>
void main()
{
int i,marks[10],sum=0,n;
float average;
clrscr();
printf("enter no of subjects:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&marks[i]);
sum+=marks[i];
}
average=sum/i;
printf("the average is:%f",average);
getch();
}