#include<stdio.h>
int main () {
// Factorial of any number 'n'.
     int n;
     printf("Enter Number:");
     scanf("%d", &n);
     int fact = 1;
     for( int i=1;i<=n;i++){
     fact = fact *i;
     }
     printf("Final Factorial: %d", fact);
     
     
    return 0;
    }