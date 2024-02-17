#include <stdio.h>
#include<conio.h> 
int fibo(int n) //recursive function, returns nth element of series
{
if(n==1)       //1st term
return 0;
else if(n==2)  //2nd term
return 1;
 
return (fibo(n-1)+fibo(n-2));
}
 
int fact(int n) //recursive function, returning fact
{ 
int f;
 
if(n>0)
{
f=n*fact(n-1); 
return f;
}
else
return 1;
}
 
int main()
{
float area,radius;
float length,breadth,perimeter,PI=3.14;
int n,i; //to avoid redeclaration and its consequent error
int ch=6; //ch is choice 
 
int digit, num, rev=0, A=0; //for palindrome & angstrom checking
 
do
{
printf("\n\n MENU ");
printf("\n 1. Fibonacci Series ");
printf("\n 2. Odd/Even ");
printf("\n 3. area of circle");
printf("\n 4. perimeter of rectangle");
printf("\n 5. EXIT ");
printf("\n Enter your choice: ");
scanf("%d",&ch); printf("\n");
 
switch(ch)
{
case 1: 
 
printf(" Enter the no of elements of fibonacci series to show:");
scanf("%d",&n);
 
printf("\n Fibonacci: \n");
for(i=1; i<=n; i++)
printf(" %d ", fibo(i) );
 
printf("\n");
break;
 

 
case 2:
 
 printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                if(num%2==0)
                    printf("\n%d is Even Number.\n\n",n);
                else
                    printf("\n%d is Odd Number.\n\n",n);
break;
case 3:
      
    printf("Enter radius of circle\n");  
    scanf("%f", & radius);  
    area = PI * radius * radius;  
    printf("Area of circle : %0.4f\n", area);
break;
case 4:
    
    
    printf("enter length of rectangle: ");
    scanf("%f",&length);
    
    
    printf("enter breadth of rectangle: ");
    scanf("%f",&breadth);
 
    perimeter=2*(length+breadth);
    printf("AOR: %f\n",perimeter);
 
default: 
printf("INVALID CHOICE");

}
 
}
while(ch!=5);
getch(); 
return 0;
}