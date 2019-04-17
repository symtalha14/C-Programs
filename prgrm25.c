#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void)
{
    float radius, center_x, center_y, test_x, test_y, _area, dist_center;
    puts("Enter Radius x-coordinate(center) , y-coordinate(center) , test x , test y :");
    scanf("%f %f %f %f %f", &radius, &center_x, &center_y, &test_x, &test_y);
    const float Area = (PI * pow(radius, 2));
    dist_center = sqrt(pow((test_x - center_x), 2) + pow((test_y - center_y), 2));
    _area = (PI * pow(dist_center, 2));
    if ((int)dist_center == (int)radius)
    {
        puts("The given point lies on the circle !");
    }
    else if (_area < Area)
    {
        puts("The given point lies inside the circle !");
    }
    else
    {
        puts("The given point lies outside the circle !");
    }
    getchar();
}