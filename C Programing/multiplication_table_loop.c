#include <stdio.h>

int main(){
    int a;
    int n;
    
    printf("enter your number:\n");
    scanf("%d", &n);
    
    for(a = 1; a<=10; a++){
        printf("%d*%d = %d \n", n , a , n*a );
    }
    return 0;
}
