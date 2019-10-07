#include<stdio.h>

int main(){
    int a[10]={1,2,3,4};
    int *z;
    z=&a[0];
    int b ,m ,c=-1;
    puts("Which element to modify\n");
    scanf("%d" , &b);
    puts("Modified value\n");
    scanf("%d" , &m);
    *(z+b-1)=m;
    while(c++<4){
        printf("%d\n",*(z+c));
    }

}