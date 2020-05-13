#include<stdio.h>

int main(){
    int a=2;
    if(a+2==4){
        a+=1;
        while(1);
    }else{
        printf("%d",a);
        return 0;
    }
}