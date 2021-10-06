#include <stdio.h>
void add(int a);
int main()
{
    int i;
    int *ptr;
    ptr = &i;
   
    printf("The address of i is %u\n", &i);
    add(i);
    
    return 0;
}
void add(int a){
  printf("The address of a is %u", &a);
   return 0;
}