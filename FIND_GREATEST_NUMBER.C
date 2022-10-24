#include<stdio.h>

// Greatest number finder (beta)
/*
     Greatest number finder (beta) Program, source code built in C can find the greatest number.
*/

int findMax(int x, int y){
    
    return (x > y) ? x:y;
    
}

int main(){
    
    int x;
    int y;
    int max = findMax(x, y);
    
    printf("Enter number one: ");
    scanf("%d", x);
    printf("Enter number two: ");
    scanf("%d", y);
    
    printf("From %d and ", x);
    printf("%d = ", y);
    printf("%d is the greatest!\n", max);
    
    return 0;
}