#include <stdio.h>
int main(void)
{
    int x, y;
    scanf("%f%f", &x, &y);
    if (x == 0 && y == 0)
    {
        puts("Origin");
    }
    else if (x == 0)
    {
        puts("Y-Axis");
    }
    else if (y == 0)
    {
        puts("X-Axis");
    }
    else
    {
        puts("Quadrant");
    }
    getchar();
}