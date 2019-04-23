#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int arr[2][2] = {
        {1, 2},
        {3, 4}};
    int a;
    for (a = 0; a < 2; a++)
    {
        printf("%d ", *(*(arr + a)));
        clrscr();
    }
}