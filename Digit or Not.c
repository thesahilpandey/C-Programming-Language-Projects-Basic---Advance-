#include<stdio.h>

int main (){
//Check weather entered character is digit or not.
  char c;
  printf("Enter any character :");
  scanf("%c", &c);
  if(c >= '0' && c <= '9') {
  
  printf("Digit \n");
  } else {
  printf("Not Digit\n");
  }
  return 0;
  }