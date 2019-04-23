/*multiplication of two matrices*/
#include <stdio.h>
int main(void)
{
    int m1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int m2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int i, j, k, l, m3[3][3] = {0};

    /*main loop for the resultant matrix*/
    for (i = 0; i < 3; i++)
    {

        for (k = 0; k < 3; k++)
        {
            for (j = 0; j < 3; j++)
            {
                int product = (m1[i][j] * m2[j][k]);
                m3[i][k] += product;
            }
        }
    }

    /*prints the matrix*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
}