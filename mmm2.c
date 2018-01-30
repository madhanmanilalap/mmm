#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
c=a;
while(a!=0)
{
b=a%10;
d=(d*10)+b;
a=a/10;
}
if(c==d)
printf("\n YES",c);
else
printf("\n NO",c);
getch();
}
