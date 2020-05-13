#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int count=0;
void towerOfHanoi(int disk, char from, char to, char aux) 
{ 
    if (disk == 1) 
    { 
        printf("\n Move disk 1 from rod %c to rod %c", from, to); 
        count++;
        return; 
    } 
    towerOfHanoi(disk-1, from, aux, to); 
    printf("\nTransfering from %c to %c",from,to);
    towerOfHanoi(disk-1, aux, to, from); 
    count++;
} 
  
int main() 
{ 
    int disks = 4; 
    srand(time(0));
    clock_t start, end;
    double time_taken;
    start=clock();
    towerOfHanoi(disks, '1', '2', '3'); 
    end=clock();
    time_taken = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCount:%d",count);
    printf("\nsTime taken: %f",time_taken);
} 