#include<stdio.h>
#include<math.h>
// Factorial of n numbers.
int fact(int n);

int main(){
    int n;
    printf("Enter the no. : ");
    scanf("%d", &n);
    printf("Factorial is: %d", fact(n));  
       return 0;
    }
    
    
    // recursive function
    int fact( int n){
    if (n == 1){
    return 1;
    }
    int factN = fact(n-1);
    int fact = factN * n;
    return fact;
    }