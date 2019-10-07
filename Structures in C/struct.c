#include <stdio.h>

typedef struct strg
{
    char *value;
} S;

struct food
{
    char *main_coarse;
    char *dessert;
    int qty;
};

typedef struct food Food;

int main()
{
    Food f;
    Food orders[10];
    for (int i = 0; i < 3; i++)
    {
        char a[100], b[100], c[100];
        scanf("%s %s %d", a, b, c);
        orders[i].main_coarse = a;
        orders[i].dessert = b;
        orders[i].qty = 10;
    }

    printf("%s %s %d\n", orders[1].main_coarse, orders[1].dessert, orders[1].qty);
    /*for (int j = 0; j < 3; j++)
    {
    }*/
}