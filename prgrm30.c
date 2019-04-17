#include <stdio.h>
#include <string.h>
int main(void)
{
    int num, count_pos, count_neg, count_zero;
    char more = 'y';
    while (more == 'y')
    {
        scanf("%d", &num);
        fflush(stdin);
        if (num > 0)
        {
            count_pos++;
        }
        else if (num < 0)
        {
            count_neg++;
        }
        else
        {
            count_zero++;
        }
        puts("Continue ? (Y/N)");
        scanf("%c", &more);
        fflush(stdin);
    }
    printf("Zeroes : %d\nPositives : %d\nNegatives :%d", count_zero, count_pos, count_neg);
    getchar();
}
