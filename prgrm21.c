#include <stdio.h>
int main(void)
{
    int row = 4;
    int arb = 10, val;
    while (row > 0)
    {
        int i = 0;
        val = arb;
        while (i < row)
        {
            printf("%d", val);
            val++;
            i++;
        }
        row--;
        arb -= row;
        printf("\n");
    }
    getchar();
}