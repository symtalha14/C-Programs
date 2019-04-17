#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    (num % 3 == 0) ? (puts("Divisible")) : (puts("Not Divisible"));
    getchar();
}
