#include<stdio.h>

int maxElement(int arr[],int l);

struct base{
    int buckets[100];
};
typedef struct base base;

int main(){
    int arr[]={12,13,10,14,9,8,7,9};
    int max;
    max = maxElement(arr,8);
    printf("The max element is :%d\n",max);
}


int maxElement(int arr[] , int l){
    int max_ , i=0, c;
    for (i;i<l;i++){
        c=0;
        max_ = arr[i];
        while (max_>=arr[c]){
            printf("%d\n",arr[c]);
            c++;
            if(c==(l-1)){
                return arr[c];
            }
            
        }

    }
}