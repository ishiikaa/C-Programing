#include<stdio.h>
void sum_avg(int *a, int *b);

    int main(){

    int a, b;
    printf("Enter number: ");
    scanf("%d", &a);

    printf("Enter number: ");
    scanf("%d", &b);

    sum_avg(&a, &b);
    return 0;
}
void sum_avg(int *a, int *b){
    printf("Sum of two numbers is %d\n", *a + *b);
    printf("Average of two numbers is %d\n", (*a + *b) / (2));
}