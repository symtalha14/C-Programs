#include <stdio.h>

int main(void)
{
    char color;
    puts("Choose a Color : W/B/O/R/G");
    scanf("%c", &color);
    if (color == 'G' || color == 'O')
    {
        puts("I dont like the color ");
    }
    else if (color == 'R' || color == 'B' || color == 'W')
    {
        puts("I like the color");
    }
    else
    {
        puts("Wrong Choice");
    }
    getchar();
}