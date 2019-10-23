#include<stdio.h>

//prototype
int bubbleSort(int arr[],int len);
int swap(int *a,int *b);
int main(){
    int myArr[]={12,3,13,10,8},i=0;
    int sz;
    sz = sizeof(myArr)/sizeof(int);
    bubbleSort(myArr,sz);
    for(i=0;i<sz;i++){
        printf("%d,",myArr[i]);
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


int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
}