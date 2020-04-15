#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    char op;

    printf("Enter a simple math expression with two operands (Example: 3 + 2)\nSeparate them with a space\n");
    printf("(Operator supported: +  -  *  / ^)\n\n");

    //you code here...
    scanf("%f %c %f",&a, &op, &b);
    switch(op){
        case '+':
            printf("%0.2f + %0.2f = %0.2f", a, b,a+b);
            break;
        case '-':
            printf("%0.2f - %0.2f = %0.2f",a,b,a-b);
            break;
        case '*':
            printf("%0.2f * %0.2f = %0.2f",a,b,a*b);
            break;
        case '/':
            printf("%0.2f / %0.2f = %0.2f",a,b,a/b);
            break;
        case '^':
            printf("%0.2f ^ %0.2f = %0.2f",a,b,pow(a,b));
            break;
        default:
            printf("no");
    }
    system("pause");
    return 0;
}