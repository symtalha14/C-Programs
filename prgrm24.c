#include <stdio.h>

int main(void)
{
    float x1, x2, x3, y1, y2, y3, m12, m23, m13;
    puts("Enter x-cordinates of the three points :");
    scanf("%d %d %d", &x1, &x2, &x3);
    fflush(stdin);
    puts("Enter y-cordinates of the three points :");
    scanf("%d %d %d", &y1, &y2, &y3);
    fflush(stdin);
    m12 = (y2 - y1) / (x2 - x1);
    m23 = (y3 - y2) / (x3 - x2);
    m13 = (y3 - y1) / (x3 - x1);
    if (m12 == m13 && m12 == m23)
    {
        puts("Collinear Points");
    }
    else
    {
        puts("Not Collinear");
    }
    getchar();
}