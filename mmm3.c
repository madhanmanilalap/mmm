#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
for(b=2;b<=a/2;++b)
{
if(a%b==0)
c=1;
break;
}
if(c==0)
printf("\n Yes prime number");
else
printf("\n No Not a prime number");
getch();
}
