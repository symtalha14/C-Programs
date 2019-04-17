#include <stdio.h>
#include <stdlib.h>
int rec(int);
int main(void)
{
    int num, fact, i;
    puts("Enter a number upto which generate fibonacci :");
    scanf("%d", &num);
    fact = rec(num);
    printf("%d ", fact);

    getchar();
}

int rec(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return (rec(x - 1) + rec(x - 2));
    }
}