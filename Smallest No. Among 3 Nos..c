#include<stdio.h>
// Code to print smallest no. among given 3 numbers.

int main(){
 float x, y, z;
 printf("Enter 1st no. :");
 scanf("%f", &x);
 printf("Enter 2nd no. :");
 scanf("%f", &y);
 printf("Enter 3rd no. :");
 scanf("%f", &z);
 
 if(x<y && x<z){
 printf("Smallest No. : %f\n", x);
 } 
     else if(y<x && y<z){
 printf("Smallest No. : %f\n", y);
 }   
     else if(z<x && z<y){
     printf("Smallest No. : %f\n", z);
     }
 return 0;
 }