#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int bubbleSort(int arr[],int len);
int selectionSort(int arr[] , int len);
int insertionSort(int arr[] , int len);
int swap(int *a,int *b);




int main()
{
    srand(time(0));
    clock_t start, end;
    double time_taken;
    int total_items=500000;
    int arr[total_items], choice;
    for (int i = 0; i < total_items; i++)
    {
        arr[i] = (rand()%10)+i;
    }
    while(1){
        puts("\nSelect an algorithm to sort:\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n");
        scanf("%d",&choice);    
        start = clock();
        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            bubbleSort(arr,total_items);
            break;
        case 2:
            selectionSort(arr,total_items);
            break;
        case 3:
            insertionSort(arr,total_items);
            break;
        default:
            puts("Enter a choice from the menu!");
            break;
        }
        end = clock();
        time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Time taken: %fs", time_taken);

    }


}





int bubbleSort(int arr[],int len){
    int j=0,k,swapped=0;
    for(j;j<len;j++){
        swapped=0;
        for(k=0;k<len-1;k++){
            if (arr[k]>arr[k+1]){
                swapped=1;
                swap(&arr[k],&arr[k+1]);
            }
        }
        if(swapped==0){
            break;
        }
    }
}




int selectionSort(int arr[],int len){
    int j,k,min;
    min=0;
    for(j=0;j<len;j++){
        min=j;
        for(k=j+1;k<len;k++){
            if(arr[k]<arr[min]){
                swap(&arr[k],&arr[min]);
            }
        }
    }
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

int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
}
