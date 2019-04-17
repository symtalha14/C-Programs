#include <stdio.h>
int mult(int, int);
int main(void)
{
    int x;
    scanf("%d", &x);
    mult(1, x);
    getchar();
}

int mult(int num, int multiple)
{
    if (num > 10)
    {
        return 0;
    }
    else
    {
        printf("%d*%d = %d\n", multiple, num, multiple * num);
        return mult(num + 1, multiple);
    }
}