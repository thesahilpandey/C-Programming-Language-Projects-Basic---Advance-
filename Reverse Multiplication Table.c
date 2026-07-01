#include<stdio.h>
int main () {
// Reverse multiplication table of any number 'n'.
     int n;
     printf("Enter Number:");
     scanf("%d", &n);
     
     for( int i=10*n;i>=n;i=i-n){
     printf("%d \n", i);
     }
     
    return 0;
    }