#include <stdio.h>
#define SIZE 10

int main(void)
{
    int i, counter, toBeSearched, arr[SIZE];
    for (i; i < SIZE; i++, scanf("%d", &arr[i]))
        ;
    puts("Enter a number to search in the array :");
    scanf("%d", &toBeSearched);
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == toBeSearched)
        {
            counter++;
        }
    }
    printf("\n");
    if (counter)
    {
        printf("Number occured this many times :%d", counter);
    }
    else
    {
        puts("Not Found !");
    }
}