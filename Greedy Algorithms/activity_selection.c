#include <stdio.h> 
void maximiseActivity(int s[], int f[], int n) 
{ 
    int i, j; 
    printf("Activities selected:\n");
    i = 0; 
    printf("%d ", i);   
    for (j = 1; j < n; j++) { 
    
        if (s[j] >= f[i]) { 
            printf("%d ", j); 
            i = j; 
        } 
    } 
} 
  
int main() 
{ 
    int start[] = { 11, 36, 10, 12, 20, 31 }; 
    int finish[] = { 22, 42, 13, 17, 21, 34 }; 
    int n = sizeof(start) / sizeof(int); 
    maximiseActivity(start, finish, n); 
    return 0; 
} 