#include <stdio.h>
#include <string.h>
void pattern(int);

int main(void)
{
    int a;
    puts("Iterations:");
    scanf("%d", &a);
    while (a > 0)
    {
        pattern(a);
        printf("\n");
        a--;
    }
    getchar();
    getchar();
}

void pattern(int n)
{
    char x = '*';
    int i = 0;
    while (i < n)
    {
        printf("%c", x);
        i++;
    }
}
