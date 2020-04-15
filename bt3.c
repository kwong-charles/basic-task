#include <stdio.h>
#include <stdlib.h>

void TempSwap(int a, int b);
void PlusMinusSwap(int a, int b);
void XORSwap(int a, int b);

int main(void) {
    int a,b;
    printf("Input a and b: \n");
    scanf("%d %d", &a, &b);
    printf("before swapping: \t a=%d a=%d \n", a, b);
    TempSwap(a,b);      
    PlusMinusSwap(a,b); 
    XORSwap(a,b);       

    system("pause");
    return 0;
}

void TempSwap(int a, int b) {
    int temp = a;    
    a = b;
    b = temp;
    printf("Using 'temp' swap:\t a=%d b=%d \n", a, b);
}

void PlusMinusSwap(int a, int b) {
    a += b;
    b = a - b;
    a -= b;
    printf("Using 'Plus-Minus' swap: a=%d b=%d \n", a, b);
}

void XORSwap(int a, int b) {
    a = a^b;
    b = b^a;
    a = a^b;
    printf("Using 'XOR' swap:\t a=%d b=%d \n", a, b);
}