/*fibbonaci using recursion */
#include <stdio.h>
int fib(int);
int main(void)
{
    int num, i, j;
    scanf("%d", &num);
    for (j; j <= num; j++)
    {

        i = fib(j);
        printf(" %d ", i);
    }
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}