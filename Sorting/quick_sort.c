#include<stdio.h> 
#include<stdlib.h>  
#include<time.h>  

void swap(int* a,int* b);

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);   
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        
        int pi = partition(arr, low, high); 
  
        
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
 

int main() 
{ 
    int arr[] = {128 , 23,256,64,153}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    clock_t start,end;
    start=clock();
    quickSort(arr, 0, n-1); 
    end=clock();
    double time_taken;
    time_taken = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Time taken: %f\n",time_taken);
    int k; 
    for (k=0; k < n; k++) 
        printf("%d ", arr[k]); 
    return 0;
}

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 


