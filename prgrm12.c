#include <stdio.h>
int xpow(int, int);
int main(void)
{
    int num, y, a;
    scanf("%d %d", &num, &y);
    a = xpow(num, y);
    printf("%d", a);
    getchar();
}

int xpow(int a, int b)
{
    int i = 2, temp;
    temp = a;
    while (i <= b)
    {
        temp *= a;
        i++;
    }
    return temp;
}