/*pg249 e)--let us c*/

#include <stdio.h>

int main(void)
{
    int x[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};
    int *n = &x[0][0];
    printf("%d %d %d %d %d %d %d %d %d %d", *(*(x + 2) + 1), *(*x + 2) + 5, *(*(x + 1)), *(*(x) + 2) + 1, *(*(x + 1) + 3), *n, *(n + 2), (*(n + 3) + 1), *(n + 5) + 1, ++*n);
}