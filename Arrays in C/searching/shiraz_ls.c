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
    int c=0;
    while(arr[c]!=elem && c<len){c++;}
    return (c==len)?-1:c;
}