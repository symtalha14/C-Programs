#include <stdio.h>

int main(void)
{
    int binary[100];
    int decimal, i, j;
    puts("Enter a Decimal number :");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        binary[i] = (decimal % 2);
        decimal /= 2;
        i++;
    }
    for (j = (i - 1); j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    getchar();
    getchar();
}