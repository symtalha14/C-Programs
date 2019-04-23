/*add two matrices*/
#include <stdio.h>

int main(void)
{
    int m1[3][3], m2[3][3];
    int i, j;
    /*inputs two matrices*/
    puts("First Matrix :");
    for (i = 0; i < 3; i++)
    {
        printf("\nRow %d\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    /*inputs the second matrix*/
    puts("Second Matrix :");
    for (i = 0; i < 3; i++)
    {
        printf("\nRow %d\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    /*Adds*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m1[i][j] += m2[i][j];
        }
    }
    printf("\n");
    puts("Adds upto :- ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
}