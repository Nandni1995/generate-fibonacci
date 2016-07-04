#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,c,d;
clrscr();
printf("Enter the number");
scanf("%d",&n);
printf("fibanocci series are:\n");
for(d=0;d<n;d++)
{
if(d<=1)
c=d;
else
{
c=a+b;
a=b;
b=c;
}
printf("%d\n",c);
}
getch();
}
