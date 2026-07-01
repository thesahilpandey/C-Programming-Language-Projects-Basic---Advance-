 #include<stdio.h>
 #include<string.h>
 #include<math.h>
 // Calculate Percentage of a student from marks in Science, Maths & Sanskrit.
 // Full Marks is 30.
 float MarkScience(float s);
 float MarkMaths(float m);
 float MarkSanskrit(float x);
 int main(){
 char subject[10];
 printf("Full Marks Is 30.\n");
 printf("Name of Subject: ");
 scanf("%s", &subject);

if (strcmp(subject, "science") == 0 || strcmp(subject, "Science") == 0){
    float s;
    printf("Marks in Science: ");
    scanf("%f", &s);
    printf("Percentage: %f\n ", MarkScience(s));
}
 else if (strcmp(subject, "maths") == 0 || strcmp(subject, "Maths") == 0){
    float m;
    printf("Marks in Maths:");
    scanf("%f", &m);
    printf("Percantage: %f\n", MarkMaths(m));
 }
 else if (strcmp(subject, "sanskrit") == 0 || strcmp(subject, "Sanskrit") == 0) {   
    float x;
    printf("Marks in Sanskrit:");
    scanf("%f", &x);
    printf("Percentage: %f\n",MarkSanskrit(x));
}
return 0;
}



float MarkScience(float s){
    return s/30*100;
}
float MarkMaths(float m){
    return m/30*100;
}
float MarkSanskrit(float x) {
    return x/30*100;
}