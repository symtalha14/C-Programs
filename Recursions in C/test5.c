/*series 1*/
#include <stdio.h>
#include <math.h>
double series(double, double);
int main(void)
{
    int limit, i, num;
    scanf("%d%d", &num, &limit);
    printf("%lf", 1.0 + series(num, limit));
}
double series(double num, double a) /* 2,3 2,2 2,1*/
{
    double temp = (num);
    if (a == 1)
    {
        return temp;
    }
    else
    {
        return (series(num, a - 1) + pow(temp, a));
    }
}