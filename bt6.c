#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,d,i,j;
    printf("Starting from? [1-90]");
    scanf("%d", &a);
    printf("No. of columns? [1-10]");
    scanf("%d", &b);
    printf("Multiples up to? [1-99]");
    scanf("%d", &c);
    printf("result\n");
    d = a + b - 1;
    for(i = 1 ; i <= c ; i++){
        for(j = a ; j <= d ; j++){
            printf("%d x %d = %d\t|", j, i, j*i);
        }
        printf("\n");
    }
system("pause");
}