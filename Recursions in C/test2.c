/*power using recursion*/
#include <stdio.h>
int calPower(int, int);

int main(void)
{
    int base, power, result;
    scanf("%d %d", &base, &power);
    result = calPower(base, power);
    printf("%d", result);
}

int calPower(int b, int p)
{
    if (p == 1)
    {
        return b;
    }
    else
    {
        int result = calPower(b, p - 1) * b;
        return result;
    }
}