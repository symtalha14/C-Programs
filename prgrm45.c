#include <stdio.h>

int main(void)
{
    int gcd = 1, num1, num2, a = 2;
    puts("Enter two numbers :");
    scanf("%d %d", &num1, &num2);
    while (a < num1)
    {
        if (num1 % a == 0 && num2 % a == 0)
        {
            gcd = a;
        }
        a++;
    }
    printf("%d", gcd);
}