#include <stdio.h> // Write a program in C to display the cube of the number upto given an integer.
void main()
{ 
 int a, b, cube = 0;
 printf("Enter numbers:\n");
 
 for(a=1; a<=b; a++){
     printf("\nNumber-%d: \n" ,a);
     scanf("%d", &b);
     
     cube = b* b* b;
     
     printf("Cube of given number is: %d", cube);
}
}