#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(void)
{
    float radius, area;
    puts("Enter radius to calculate area :");
    scanf("%f", &radius);
    area = (PI * pow(radius, 2));
    printf("%3f", area);
}