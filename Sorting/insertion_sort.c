#include<stdio.h>

int insertionSort(int arr[] , int len);
int swap(int *a,int *b);

int main(){
    int myArr[] = {2,4,10,15,35,23,3};
    int sz,i=0;
    sz = sizeof(myArr)/sizeof(int);
    insertionSort(myArr,sz);
    for(i;i<sz;i++){
        printf("%d ",myArr[i]);
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