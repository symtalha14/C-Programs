#include <stdio.h>

int main(void)
{
    int age;
    scanf("%d", &age);
    (age >= 18) ? (puts("Eligible")) : (puts("Not Elgible"));
    getchar();
}
