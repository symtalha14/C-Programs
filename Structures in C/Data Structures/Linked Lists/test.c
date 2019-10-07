#include<stdio.h>

struct node{
    char data;
    struct node* nextPtr;
};

typedef struct node apple;
typedef apple *aptr;

int main(){
     aptr startPtr=NULL;
     int x=4;
     int *p;
     *p=&x;
     int *z;
     z=&p;
     printf("%d",*z);
}