#include <stdio.h>

int main(void)
{
    int i = 2, num, fact = 1;
    scanf("%d", &num);
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("%d", fact);
    getchar();
}