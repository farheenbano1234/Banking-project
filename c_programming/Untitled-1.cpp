#include<iostream.h>
#include<conio.h>
class set
{
int m,n;
public:
void input();
void display();
int largest();
};
void set :: input()
{
cout << "input values" ;
cin >> m >> n;
}
int set :: largest()
{
if (m>=n)
return (m);
else
return (n);
}
void set :: display()
{
cout << "largest value =" << largest();
}
void main()
{
clrscr();
set s;
s.input();
s.display();
getch();
}