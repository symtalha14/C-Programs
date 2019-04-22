/*multiplication using recursion*/
#include <stdio.h>
int multiply(int, int);
int main(void)
{
    int num, i = 1;
    scanf("%d", &num);
    for (i; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, multiply(num, i));
    }
}

int multiply(int val, int c)
{
    if (c == 1)
    {
        return val;
    }
    else
    {
        int x = multiply(val, 1) + multiply(val, c - 1);
        return x;
    }
}