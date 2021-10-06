#include<stdio.h>

    int main(){
    
    int a = 2;
    int *ptr = &a;
    int **k = &ptr;
    printf("Value of a is %d", **k);
    
     
    return 0;
    }
