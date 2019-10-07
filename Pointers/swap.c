#include<stdio.h>

void swap(int *,int *);

int main(){
    int a,b;
    scanf("%d %d" , &a,&b);
    swap(&a,&b);
    printf("a=%d b=%d" , a ,b );
    
}

void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;

}