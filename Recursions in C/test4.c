/*factorial using recursion*/
#include <stdio.h>

unsigned long long int fact(unsigned long int);
int main(void)
{
    unsigned long int num;
    scanf("%lu", &num);
    printf("%lu", fact(num));
}

unsigned long long int fact(unsigned long int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}