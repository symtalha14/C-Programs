#include <stdio.h>

int main(void)
{
    int a[10];
    int i;
    while (i < 10)
    {
        scanf("%d", &a[i]);
        i++;
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {

        printf("%d ", a[i + 1] * a[i]);
    }
}