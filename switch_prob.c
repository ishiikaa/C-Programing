#include<stdio.h>

    int main(){
     int marks;
     printf("Enter your marks( 0 - 100):\n");
     scanf("%d", &marks);

     switch (marks/10)
     {
         case 10:
     case 9:
    printf("Grade is A\n");
         break;
         case 8:
    printf("Grade is B\n");
         break;
         case 7:
    printf("Grade is C\n");
         break;
         case 6:
    printf("Grade is D\n");
         break;
         case 5:
    printf("Grade is F\n");
         break;
     
     default:
     printf("Grade: G");
         break;
     }
    return 0;
}