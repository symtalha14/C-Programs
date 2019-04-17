#include <stdio.h>
void pattern(int);
int test(int);
int main(void)
{
    int i, j = 1, k = 1;
    puts("Enter Iterations :");
    scanf("%d", &i);
    while (j < i)
    {
        pattern(i - j);
        test(k);
        printf("\n");
        j++;
        k = k * 11;
    }
    getchar();
    getchar();
}

void pattern(int sz)
{
    char sp = ' ';
    int m = 0;
    while (m < sz)
    {
        printf("%c", sp);
        m++;
    }
}

int test(int a)
{
    if (a < 10)
    {
        printf("%d", a);
    }
    else
    {
        while (a > 0)
        {
            printf("%d ", a % 10);
            a = a / 10;
        }
    }
}