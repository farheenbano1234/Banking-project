//Write a program to implement ctype.h , math.h , string.h header file
#include<stdio.h>
#include<ctype.h>
#include <math.h>
#include <string.h>
#include<conio.h>
int main()
{
    char ch;
    char nickname[20];
    printf("Enter a character: ");
    scanf("%c",&ch);
     
    if(isalpha(ch))
        printf("%c is an alphabet.\n",ch);
    else
        printf("%c is not an alphabet.\n",ch);
    double x, ret;
   x = 2.7;
 
   /* finding log(2.7) */
   ret = log(x);
   printf("log(%lf) = %lf", x, ret);
    
    
    puts("Enter your Nick name:");
    gets(nickname);
    puts(nickname);
    getch();         
    return 0;
}
