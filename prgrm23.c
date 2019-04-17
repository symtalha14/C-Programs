#include <stdio.h>
#include <string.h>
void pattern(int, int);
int main(void)
{
    int a, i = 1, j, med;
    scanf("%d", &a);
    med = (int)(a / 2);
    j = med + 1;
    for (i, j; j > 0; i += 2, j--)
    {
        pattern(j, i);
        printf("\n");
    }
    i -= 4;
    j = 2;
    for (; i > 0; i -= 2, j++)
    {
        pattern(j, i);
        printf("\n");
    }
    getchar();
    getchar();
}

void pattern(int sp, int val)
{
    int i = 0, j = 0;
    char space = ' ';
    while (i < sp)
    {
        printf("%c ", space);
        i++;
    }
    while (j < val)
    {
        printf("%c ", '*');
        j++;
    }
}