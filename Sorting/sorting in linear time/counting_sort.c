#include<stdio.h>


int main(){
    //input array
    int a[]={9,1,9,8,2,10,3,12};
    //output array
    int b[6]={};
    //counting array
    int c[15]={0};
    int i=0,j=0;
    //counting the no. of occurences in the array
    for(i;i<8;i++){
        c[a[i]]+=1;

    }

    //cumulative counts
    for(j=1;j<16;j++){
        c[j]=c[j]+c[j-1];
        printf("%d\n",c[j]);
    }
    
    for(j=0;j<8;j++){
        b[c[a[j]]-1]=a[j];
        c[a[j]]=c[a[j]]-1;
    }
    //displaying
    for (j=0;j<8;j++){
        printf("%d\n",b[j]);
    }

}