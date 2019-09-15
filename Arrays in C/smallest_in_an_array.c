/*find the smallest amongs the array elements*/
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int min, arr[SIZE] = {-5, 23, 342, 54, 2, 43, 1, -3, 0, 3}, i;
    min = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\n");
    printf("Smallest Element :%d", min);
}