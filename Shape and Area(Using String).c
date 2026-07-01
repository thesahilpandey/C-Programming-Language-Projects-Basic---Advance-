 #include<stdio.h>
 #include<math.h>
 #include<string.h>
 // Area of square, rectangle and circle in one Program.
 float areaCircle(float r);
 float areaRectangle(float l, float b);
 float areaSquare(float s);
 int main(){
 char shape[10];
 printf("Shape of object: ");
scanf("%s", &shape);

if (strcmp(shape, "rectangle") == 0 || strcmp(shape, "Rectangle") == 0){
    float l, b;
    printf("Length of Rectangle:");
    scanf("%f", &l);
    printf("Breadth of Rectangle:");
    scanf("%f", &b);
    printf("Area of Rectangle: %f\n ", areaRectangle(l, b));
}
 else if (strcmp(shape, "circle") == 0 || strcmp(shape, "Circle") == 0){
    float r;
    printf("Radius of Circle:");
    scanf("%f", &r);
    printf("Area of Circle: %f\n", areaCircle(r));
 }
 else if (strcmp(shape, "square") == 0 || strcmp(shape, "Square") == 0) {   
    float s;
    printf("Side of Square:");
    scanf("%f", &s);
    printf("Area of Square:%f\n",areaSquare(s));
}
return 0;
}



float areaRectangle(float l, float b){
    return l*b;
}
float areaSquare(float s) {
    return s*s ;
}
float areaCircle(float r) {
    return r*r*3.14;
}