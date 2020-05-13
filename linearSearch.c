#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int arr[], int len, int elem);

int main()
{
    srand(time(0));
    clock_t start, end;
    double time_taken;
    int total_items=500000;
    
    int arr[total_items], elem;
    for (int i = 0; i < total_items; i++)
    {
        arr[i] = (rand()%10)+i;
    }
    puts("Enter  an element to search");
    scanf("%d", &elem);

    start = clock();
    linearSearch(arr, total_items, elem);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %fs", time_taken);
}

int linearSearch(int arr[], int len, int elem)
{
    int found = -1, j;

    for (j = 0; j < len; j++)
    {
        if (arr[j] == elem)
        {
            found = j;
            break;
        }
    }
    (found == -1) ? (puts("No match found!\n")) : (printf("Match found at index %d\n", found));
}