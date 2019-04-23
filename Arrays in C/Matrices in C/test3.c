/*pointing to a 2-d array*/

#include <stdio.h>

int main(void)
{
    int arr[7][3] = {
        {1, 2, 3},
        {3, 4, 3},
        {5, 6, 4},
        {5, 6, 4},
        {5, 6, 4},
        {5, 6, 4},
        {5, 6, 4}};
    int(*p)[3];
    int i, j, *pint;
    for (i = 0; i < 7; i++)
    {
        p = &arr[i];
        pint = (int *)p;
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", *(pint + j));
        }
        printf("\n");
    }
}