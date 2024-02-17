//Write a program to calculate average of given numbers

#include<stdio.h>
#include<conio.h>
main()
{
int i,n;
float num[100],sum=0.0,average=0.0;
printf("enter the number of data for which you want to find the average:");
scanf("%d",&n);
while(n>100 || n<=0)
{
printf("error! number should in the range of (1 to 100).\n");
printf("enter the number again:");
scanf("%d",&n);
}
for(i=0; i<n; ++i)
{
printf("%d. enter number:",i+1);
scanf("%f",&num[i]);
sum+=num[i];
}
average=sum/n;
printf("average= %.2f",average);
printf("\npress any key to exit");
getch();
}
