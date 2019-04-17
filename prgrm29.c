#include <stdio.h>
int xpow(int, int);
int armstrong_number(int);

int main(void)
{
    long int i = 1;
    for (i; i < 10000; i++)
    {
        armstrong_number(i);
    }
    getchar();
}

int armstrong_number(int x)
{
    int digit_power = 0, y, temp = 0, hold;
    y = x;
    while (y > 0)
    {
        y = y / 10;
        digit_power++;
    }
    y = x;
    while (y > 0)
    {
        hold = y % 10;
        temp = temp + (xpow(hold, digit_power));
        y = y / 10;
    }

    if (temp == x)
    {
        printf("%d\n", x);
    }
}

int xpow(int a, int b)
{
    int i = 2;
    while (i <= b)
    {
        a *= a;
    }
    return a;
}