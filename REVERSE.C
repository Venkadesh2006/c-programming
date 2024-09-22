#include<stdio.h>
void main()
{
int a,i,sum=0,r;
clrscr();
printf("enter the number:");
scanf("%d",&a);
for(i=a;a!=0;a=a/10)
{
r=a%10;
sum=sum*10+r;
}
printf("the reverse of num is %d",sum);
getch();
}