#include<stdio.h>
void sum_avg( int *a, int *b, int *sum, int *avg); 

    int main(){
    
    int a, b, sum, avg;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);
    
    sum_avg(&a, &b, &sum, &avg);
    printf("Sum and Avg is %d, %d", sum, avg );
    return 0;
}   
void sum_avg( int *a, int *b, int *sum, int *avg){
     
     *sum = *a + *b;
     *avg = *sum / 2;

}