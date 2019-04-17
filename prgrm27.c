#include <stdio.h>

int main(void)
{
    int flag;
    float s1, s2, s3, max;
    puts("Enter the three sides :");
    scanf("%f %f %f", &s1, &s2, &s3);
    max = ((s1 > s2) ? ((s1 > s3) ? s1 : s3) : ((s2 > s3) ? s2 : s3));
    if (max == s1)
    {
        if ((s2 + s3) > s1)
        {
            flag = 1;
        }
    }
    else if (max == s2)
    {
        if ((s1 + s3) > s2)
        {
            flag = 1;
        }
    }
    else
    {
        if ((s1 + s2) > max)
        {
            flag = 1;
        }
    }
    (flag == 1) ? (puts("Valid Triangle !")) : (puts("Not Valid !"));
    getchar();
}