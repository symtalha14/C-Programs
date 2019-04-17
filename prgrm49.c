#include <stdio.h>

void Dec2Hex(int no)
{
    int hex = 0;
    if (!no)
        return;
    else
    {
        hex = no % 16;
        Dec2Hex(no / 16);
    }
    if (hex > 9)
        printf("%c", 'A' + (hex - 10));
    else
        printf("%d", hex);
}

int main()
{
    int k = 0;
    printf("Enter no:");
    scanf("%d", &k);
    Dec2Hex(k);
    return 0;
}