#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c[50],d=0,i;
clrscr();
printf("Enter the limit of array:");
scanf("%d",&a);
for(i=0;i<a;i++)
scanf("%d",&c[i]);
printf("Enter the No. want to add:");
scanf("%d",&b);
for(i=0;i<b;i++)
d=d+c[i];
printf("Sum = %d",d);
getch();
}
