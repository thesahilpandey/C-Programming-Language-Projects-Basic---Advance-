#include<stdio.h>
// To check if a no. is natural or not.

int main(){
 float a;
 printf("Enter Any Number:");
if(scanf("%f", &a) != 1){
    printf("Not a Valid Input.");
    } 
else if(a >=1 && a == (int)a){
  printf("Natural Number.");
  }
else {
    printf("Not Natural.");
    }
    return 0;
    }
    