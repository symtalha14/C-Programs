#include<stdio.h>

int searchArr(int arr[] , int elem , int _size);

int main(){
    //assuming a sorted array
    int to_find,found_at, arr[]={3,4,6,9,12,109,453};
    puts("Enter an element to search : ");
    scanf("%d",&to_find);
    found_at = searchArr(arr , to_find , sizeof(arr));
    if(found_at!=-1){
        printf("\nElement found at index %d",found_at);
    }else{
        puts("Element not found");
    }
}

int searchArr(int arr[] , int elem , int _size){
    int size_int = sizeof(int);
    int len = _size/size_int;
    int flag,low,mid,high;
    low=0;
    high = len-1;
    mid=(low+high)/2;//3
    while(low<high){
        if(elem<arr[mid]){
            high=mid-1;
        }
        if(elem>arr[mid]){
            low=mid+1;
        }
        mid=(low+high)/2;
        if(arr[mid]==elem){
            return mid;
        }
        
    }
   return -1;
}