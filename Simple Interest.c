#include<stdio.h>
int main() {
    // Simple Intrest.
    // P = Principal Amount, T = Time Period( in months) and R = Rate of Interest.
    float P, T, R ;
    printf("Principal Amount(P):");
    scanf("%f", &P);
    printf("Time Period(T):");
    scanf("%f", &T);
    printf("Rate of Interest(R) :");
    scanf("%f", &R);
    printf("Simple Interest: %f", (P*R*T)/100);

    return 0;
}