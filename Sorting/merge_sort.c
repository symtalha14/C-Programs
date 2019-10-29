//Merge Sort
#include<stdio.h>

int mergeSort(int arr[] , int lower , int upper);
int merge(int arr[] , int lower , int mid , int upper);


int main(){

    int ages[]={40,30,12,32,23,31,8};
    int lower , mid , upper;
    lower=0;
    upper = (sizeof(ages)/sizeof(int))-1;
    //mid =(int)(lower+upper)/2;
    mergeSort(ages,lower,upper);
    for(lower=0;lower<upper;lower++){
        printf("%d ",ages[lower]);
    }
}


int mergeSort(int arr[] , int lower ,int upper){
    //condition to check multi-elements array
    if(lower<upper){

        int mid =(int)lower+(upper-1)/2;
        mergeSort(arr , lower , mid);//first half of the array
        mergeSort(arr , mid+1 , upper);//second half of the array
        //merge the arrays after splitting
        merge(arr,lower,mid,upper);
    }
}
//[1,2,3,4,5] 
int merge(int arr[] , int lower, int mid , int upper){
    int L = lower + mid + 1;
    int R = upper - mid;
    int left_half[L] , right_half[R] ,i=0,j=0,k=lower;

    //filling the left half
    while(i<L){
        left_half[i]=arr[k];
        i++;
        k++;
    }
    //filling the right half
    while(j<R){
        right_half[j]=arr[k];
        k++;
        j++;
    }

    //sort the elements in arr by comparing L and R
    k=lower;
    while(i<L && j<R){
        if(left_half[i]<=right_half[j]){
            arr[k]=left_half[i];
            i++;
        }else{
            arr[k]=right_half[j];
            j++;
        }
        k++;
    }
    while(i<L){
        arr[k]=arr[i];
        i++;
        k++;
    }
    while(j<R){
        arr[k]=arr[j];
        j++;
        k++;
    }


}