#include <stdio.h>
#include <string.h>

int main(void)
{
    char ref[30];
    gets(ref);
    int i = 1;
    for (; i < strlen(ref) + 1; i++)
    {
        int j = 0;
        while (j < i)
        {
            printf("%c", ref[j]);
            ++j;
        }
        printf("\n");
    }
    getchar();
    getchar();
}