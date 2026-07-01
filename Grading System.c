#include<stdio.h>
int main () {
      // Grading System
     float marks ;
     printf("Marks Obtained:");
     scanf("%f", &marks);
     if(marks<30) {
     printf("Your Grade: C");
     } 
     else if(marks>=30 && marks<70) {
     printf("Your Grade: B");
     } 
     else if(marks>=70 && marks<90) {
     printf("Your Grade: A" );
     } else if ( marks>=90 && marks<=100){
     printf("Your Grade: A+");
     } else {
     printf("Error! \n");
     printf("Full Marks Is 100! \n");
     }
     
     return 0;
     }