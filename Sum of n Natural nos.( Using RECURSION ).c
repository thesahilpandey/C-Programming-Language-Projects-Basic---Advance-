#include<stdio.h>
// Sum of first n Natural numbers.
int sum(int n);

int main(){
    int n;
    printf("Enter the no. : ");
    scanf("%d", &n);
    printf("Sum is: %d", sum(n));  
       return 0;
    }
    
    
    // recursive function
    int sum( int n){
    if (n == 1){
    return 1;
    }
    int sumN = sum(n-1);
    int sum = sumN + n;
    return sum;
    }