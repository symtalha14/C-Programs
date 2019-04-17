#include <stdio.h>
#include <string.h>
void pattern(int);
int main(void)
{
    int a, med, i, j; /*iterations , middle*/
    puts("Iterations:");
    scanf("%d", &a);
    med = (int)a / 2;
    while (i < med)
    {
        pattern(i);
        i++;

        printf("\n");
    }
    while (med > 0)
    {
        pattern(med);

        printf("\n");
        med--;
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