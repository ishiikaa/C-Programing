#include<stdio.h>
int call(int *a);

    int main(){
     int a = 3;
    call(&a);
     
    return 0;
    }
int call(int *a){
    printf("The value of %d\n", *a *(10));
   return *a;
   
    
   
}