#include <stdio.h>

int main(void)
{
    int flag;
    float s1, s2, s3, max;
    puts("Enter the three sides :");
    scanf("%f %f %f", &s1, &s2, &s3);
    if (s1 == s2 && s2 == s3)
    {
        puts("Equilateral Triangle !");
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        puts("Isoceles Triangle !");
    }
    else
    {
        puts("Scalene Triangle !");
    }
    getchar();
}
