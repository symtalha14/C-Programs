#include <stdio.h>
int main(void)
{
    int day;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        puts("Monday");
    case 2:
        puts("Tuesday");
    case 3:
        puts("Wednesday");
    case 4:
        puts("Thursday");
    case 5:
        puts("Friday");
    case 6:
        puts("Saturday");
    case 7:
        puts("Sunday");
    }
    getchar();
}