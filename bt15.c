#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point{
    float x, y;
};
float m, n, c;

point f1(point a, point b);
float f2(point a, point b);
void f3(point a, point b);
void f4(point a, point b, point c); 

int main()
{
    point test1, test2, test3;
    point r1;
    float r2;
    printf("Enter the cooridnate of point 1: ");
    scanf("%f %f", &test1.x, &test1.y);
    printf("Enter the cooridnate of point 2: ");
    scanf("%f %f", &test2.x, &test2.y);
    printf("Enter the cooridnate of point 3: ");
    scanf("%f %f", &test3.x, &test3.y);
    r1 = f1(test1, test2);
    printf("Midpoint of point 1 and point 2: (%0.2f, %0.2f)\n", r1.x, r1.y);
    r2 = f2(test1, test2);
    printf("Distance between point 1 and point 2: %0.2f\n", r2);
    f3(test1, test2);
    f4(test1, test2, test3);
    system("pause");
    return 0;
}

point f1(point a, point b){
    point r;
    r.x = (a.x + b.x)/2;
    r.y = (a.y + b.y)/2;
    return r;
}

float f2(point a, point b){
    float r;
    r = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
    return r;
}

void f3(point a, point b){
    int x, y, no, div;
    y = a.y - b.y;
    x = a.x - b.x;
    if(abs(x) >= abs(y)){
        no = abs(y);
    }
    else{
        no = abs(x);
    }
    for(int i = 1 ; i <= no ; i++){
        if(y%i == 0 & x%i == 0){
            div = i;
        }
    }
    m = y/div;
    n = x/div;
    c = n*a.y - m*a.x;
    printf("The formula is %0.2f", m);
    if(-n > 0){
        printf("+");
    }
    printf("%0.2f", -n);
    if(c>0){
        printf("+");
    }
    printf("%0.2f = 0\n", c);
}

void f4(point a, point b, point d){
    if((a.y - b.y)/(a.x - b.x) == (d.y - b.y)/(d.x - b.x)){
        printf("The three points are on the same line\n");
        printf("The formula is %0.2f", m);
        if(-n > 0){
            printf("+");
        }
        printf("%0.2f", -n);
        if(c>0){
            printf("+");
        }
        printf("%0.2f = 0\n", c);
        }
    else{
        printf("The three points aren't on the same line\n");
    }
}