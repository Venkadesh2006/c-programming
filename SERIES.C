#include<stdio.h>
void main()
{
int n,i;
float fact=1,sum=0;
clrscr();
printf("enter value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
sum=(i/fact)+sum;
}
printf("%f",sum);
getch();
}