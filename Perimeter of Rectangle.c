#include<stdio.h>
int main() {
  // Perimeter of a Rectangle of length = 'l' and breadth = 'b'.
  float l, b ;
  printf("Length of rectangle(l):");
  scanf("%f", &l);
  printf("Breadth of rectangle(b):");
  scanf("%f", &b);
  printf("Perimeter of rectangle: %f", 2*(l+b));
  
    return 0;
}