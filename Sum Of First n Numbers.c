#include<stdio.h>
int main () {
// Sum of n natural numbers.
     int n;
     printf("enter number:");
     scanf("%d", &n);
     
     int sum=0;
     for(int i=0; i<=n; i++){
     sum=sum+i;
     }
     printf("Sum is: %d \n", sum);
    return 0;
    }