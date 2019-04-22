#include <stdio.h>

int main(void)
{
    char str1[100], str2[100], ind;
    scanf("%s %s", &str1, &str2);
    while (str1[ind] != '\0')
    {
        if (str1[ind] != str2[ind])
        {
            puts("Not Alike !");
            return 0;
        }
        ind++;
    }
    puts("Same !!");
}