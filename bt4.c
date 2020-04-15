#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    float a,b,c,d,e;
    int i;
    printf("Solving quadratic equation: ax^2 +bx +c\n");
    printf("a?\t");
    scanf("%f", &a);
    printf("b?\t");
    scanf("%f", &b);
    printf("c?\t");
    scanf("%f", &c);
    d = pow(b,2) - 4*a*c;
    d < 0 ? i = 1 : d == 0 ? i = 2 : i = 3;
    if(a == 0) {
        i = 4;
    }
    switch(i){
        case 1:
            printf("\nThere are no real roots for this equation. Discriminant = %0.4f", d);
            break;
        case 2:
            e = -1*b/(2*a);
            printf("Double roots: \n%0.4f", e);
            break;
        case 3:
            e = (-1*b + sqrt(d))/(2*a);
            printf("The first root: \n%0.4f", e);
            e = (-1*b - sqrt(d))/(2*a);
            printf("The second root: \n%0.4f", e);
            break;
        case 4:
            printf("This is not a quadratic equation");
    }
    system("pause");
    return 0;
}