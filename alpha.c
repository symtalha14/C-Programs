#include <stdio.h>
#include <string.h>
void reverse_string(char[]);
int main(void)
{
    char test[100];
    gets(test);
    reverse_string(test);

    getchar();
}

void reverse_string(char x[])
{
    int index = 0, l;
    l = (strlen(x) - 1);
    char y[100];
    while (x[index] != '\0')
    {
        y[index] = x[l];
        index++;
        l--;
    }
    y[index] = '\0';
    printf("%s", y);
};
