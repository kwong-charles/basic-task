#include <stdio.h>
int main() {
    float r;
    float pi = 3.141592654;
    printf("Radius? ");
    scanf("%f", &r);
    printf("Area: %0.4f", pi*r*r);
}