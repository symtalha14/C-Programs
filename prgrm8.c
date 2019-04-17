#include <stdio.h>
int main(void)
{
    int s1, s2, s3, max;
    scanf("%d %d %d", s1, s2, s3);
    max = ((s1 > s2) ? ((s1 > s3) ? s1 : s3) : ((s2 > s3) ? s2 : s3));
    printf("%d", max);
}