#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf(" Enter the limit1 and limit 2 \n  :");
scanf("%d%d",&b,&c);
printf("The ODD Numbers between %d and %d \n",b,c);
for(a=b;a<=1;a++)
{
if(a%2!=0)
printf("\n %d",a);
}
getch();
}
