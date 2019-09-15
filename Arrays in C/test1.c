/*reverse copy an array*/
#include <stdio.h>
#define SIZE 15
int main(void)
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}, i, array_reversed[SIZE];
    printf("\n");
    for (i = (SIZE - 1); i >= 0; i--)
    {
        array_reversed[SIZE - i - 1] = arr[i];
        printf("%d ", array_reversed[SIZE - i - 1]);
    }
}