#include <stdio.h>

int main(void)
{
    int extreme = 3, a = 1;
    while (a <= extreme)
    {
        int j = 0;
        while (++j <= a)
        {
            printf("%d", j);
        }
        a++;
        printf("\n");
    }

    getchar();
}