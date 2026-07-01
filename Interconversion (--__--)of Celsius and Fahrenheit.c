#include<stdio.h>
// Interconversion of Celsius and Fahrenheit.
float fahren(float c);
float celsius(float f);
int main() {
       int x;
       printf("Choose the conversion type.\n");
       printf("1.Celsius to Fahrenheit.\n");
       printf("2.Fahrenheit to Celsius.\n");
       printf("Enter conversion type(1 or 2): ");
       scanf("%d", &x);
       if( x == 1){
       float c;
       printf("Temperature in Degree Celsius: ");
       scanf("%f", &c);
       printf("Temperature in Fahrenheit: %f \n", fahren(c));
       } else if ( x == 2){
       float f;
       printf("Temperature in Fahrenheit: ");
       scanf("%f", &f);
       printf("Temperature in Degree Celsius: %f\n", celsius(f));
       } else {
       printf("NOT a VALID Input!!!");
       }
       return 0;
       }
float fahren(float c){
        return (c*1.8)+32;
        } 
float celsius(float f){
        return (f-32)*5/9;
        }