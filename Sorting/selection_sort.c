#include<stdio.h>

int selectionSort(int arr[] , int len);
int swap(int *a,int *b);

int main(){
    int myArr[] = {2,4,10,15,35,23,3};
    int sz,i=0;
    sz = sizeof(myArr)/sizeof(int);
    selectionSort(myArr,sz);
    for(i;i<sz;i++){
        printf("%d ",myArr[i]);
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

int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
}