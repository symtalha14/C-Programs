/*declaring a matrix*/
#include <Stdio.h>

int main(void)
{
    int mat[2][3];
    int i;
    for (i; i < 2; i++)
    {
        printf("Address of %d is %u\n", i, mat[i]);
    }
}