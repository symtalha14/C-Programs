//address of elements of an array
#include<stdio.h>


int main(){
    int arr[]={2,4,1,3};
    printf("Address of the Array : %u\n" , &arr[0]);
    printf("Address of all elements :\n");
    int i=0;
    for(i=0; i < 4 ; i++){
        printf("Arr[%d] at :%u\n",i , &arr[i]);
    }

}