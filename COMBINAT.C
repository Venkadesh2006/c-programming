#include<stdio.h>
int main()
{
int n,i,j,k;
clrscr();
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
for(k=1;k<=3;k++)
{
if(i!=j&&j!=k&&i!=k);
printf("\n%d %d %d",i,j,k);
}
}
}
getch();
}