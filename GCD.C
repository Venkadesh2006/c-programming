#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,gcd=1,min,i;
clrscr();
printf("enter two integers:");
scanf("%d %d",&num1,&num2);
min=(num1<num2)?num1:num2;
for(i=1;i<=min;i++)
{
if(num1%i==0 && num2%i==0)
gcd=i;
}
printf("gcd of the entered num is: %d\n",gcd);
getch();
}