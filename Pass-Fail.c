#include<stdio.h>
int main () {
     float marks ;
     printf("What's Your Marks:");
     scanf("%f", &marks);
     if(marks>=30 && marks<=100) {
     printf("Pass");
     } 
     else if(marks<30 && marks>=0) {
     printf("Fail");
     } 
     else {
     printf("Error! \n" );
     printf("Full Marks is 100! \n");
     }
     
     return 0;
     }