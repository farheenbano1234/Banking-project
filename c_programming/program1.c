//Write a program to print the table of a number


#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
printf("enter any number :");
scanf("%d",&n);
printf("Table of %d\n",n);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",n,i,(n*i));
}
getch();
}
