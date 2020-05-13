#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int searchArr(int arr[], int elem, int _size);
int insertionSort(int arr[] , int len);

int main()
{
    int total_items=500000;
    int to_find, found_at, arr[total_items];
    srand(time(0));
    clock_t start, end;
    double time_taken;

    for (int i = 0; i < total_items; i++)
    {
        arr[i] = (rand() % 10) + i;
    }
    insertionSort(arr,total_items);
    puts("Enter an element to search : ");
    scanf("%d", &to_find);
    start = clock();
    found_at = searchArr(arr, to_find, sizeof(arr));
    if (found_at != -1)
    {
        printf("\nElement found at index %d", found_at);
    }
    else
    {
        puts("Element not found");
    }
    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken: %fs", time_taken);
}

int searchArr(int arr[], int elem, int _size)
{
    int size_int = sizeof(int);
    int len = _size / size_int;
    int flag, low, mid, high;
    low = 0;
    high = len - 1;
    mid = (low + high) / 2; //3
    while (low < high)
    {
        if (elem < arr[mid])
        {
            high = mid - 1;
        }
        if (elem > arr[mid])
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
        if (arr[mid] == elem)
        {
            return mid;
        }
    }
    return -1;
}



int insertionSort(int arr[],int len){
    int j,k,s;
    for(j=1;j<len;j++){
        s=arr[j];
        k=j-1;
        while(k>=0 && arr[k]>s){
           arr[k+1]=arr[k];
           k--; 
        }   
        arr[k+1]=s;
    }
}
