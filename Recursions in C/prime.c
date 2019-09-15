#include <stdio.h>

int fact(int, int);

int main(void)
{
    int num, i;
    scanf("%d", &num);
    printf("%d", fact(num, 2));
}

int fact(int x, int t)
{
    if (t == x)
    {
        return 1;
    }
    else if (x % t == 0)
    {
        return 0;
    }

    else
    {
        return fact(x, t + 1);
    }
}