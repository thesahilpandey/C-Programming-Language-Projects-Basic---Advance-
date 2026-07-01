#include<stdio.h>
int main () {
// Multiplication Table Of Any Number 'n'.
     int n;
     printf("Enter Number:");
     scanf("%d", &n);
     
     for(int i=n; i<=10*n; i=i+n){
     printf("%d \n", i);
     }
     
    return 0;
    }