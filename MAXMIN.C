#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
float max,min,numbers[40];
clrscr();
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter %d numbers:\n",n);
for(i=0;i<n;i++)
{
printf("number %d:",i+1);
scanf("%f",&numbers[i]);
}
max=min=numbers[0];
for(i=1;i<n;i++)
{
if(numbers[i]>max)
{
max=numbers[i];
}
if(numbers[i]<min)
{
min=numbers[i];
}
}
printf("maximum value:%.2f\n",max);
printf("minimum value:%.2f\n",min);
getch();
}