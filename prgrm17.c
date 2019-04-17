#include <stdio.h>
#include <string.h>
void pattern(int, int);
int main(void)
{
    int a, k = 1, ct_sp;
    puts("Iterations:");
    scanf("%d", &a);
    ct_sp = a - 1;
    while (k < (a + 1))
    {
        pattern(k, ct_sp);
        printf("\n");
        k++;
        ct_sp--;
    }
    getchar();
    getchar();
}

void pattern(int n, int sz)
{
    char x = '*';
    char sp = ' ';
    int i = 0, j = 0;
    while (i < sz)
    {
        printf("%c", sp);
        i++;
    }
    while (j < n)
    {
        printf("%c", x);
        j++;
    }
}
