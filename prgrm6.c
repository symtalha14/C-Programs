#include <stdio.h>
int main(void)
{
    int marks;
    scanf("%d", &marks);
    if (marks >= 80 && marks <= 100)
    {
        puts("A");
    }
    else if (marks >= 60 && marks <= 79)
    {
        puts("B");
    }
    else if (marks >= 50 && marks <= 59)
    {
        puts("C");
    }
    else if (marks >= 40 && marks <= 49)
    {
        puts("D");
    }
    else
    {
        puts("F");
    }
    getchar();
}