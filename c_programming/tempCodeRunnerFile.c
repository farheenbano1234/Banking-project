#include<stdio.h>
struct student
{
    char name;
    int rollno;
    float marks;
};
struct student std_func(char, int, float);
main()
{
    struct student s1 = {'A', 125, 95};
    std_func(s1.name, s1.rollno, s1.marks);
    getch();
}
struct student std_func(char name, int rollno, float marks)
{
    printf("Name\tRoll No.\tMarks\n");
    printf("%c\t%d\t\t%.2f", name, rollno, marks);
}