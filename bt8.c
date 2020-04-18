#include <stdio.h>
#include <stdlib.h>

void p1(int i);
void p2(int i);
void p3(int i);
void p4(int i);

int main() {
    int n;
    printf("number of rows? (1-9)\t");
    scanf("%d",&n);
    printf("\nPattern #1\n");
    p1(n);
    printf("\nPattern #2\n");
    p2(n);
    printf("\nPattern #3\n");
    p3(n);
    printf("\nPattern #4\n");
    p4(n);
    system("pause");
}

void p1(int i){
    for(int b = 1 ; b <= i ; b++){
        for(int a = 1 ; a <= i ; a++){
            if(i + 1 - a <= b){
                printf("%d", i +1 - a);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void p2(int i){
    int c = 1;
    for(int a = 1 ; a <= 9 ; a++){
        for (int b = 1 ; b <= a ; b++){
            if(c < 10){
                printf("%d  ", c);
                c++;
            }
            else{
                printf("%d ", c);
                c++;
            }
        }
        printf("\n");
    }
}

void p3(int i){
    char y[] = "123456789";
    char x[i];
    for(int a = 0 ; a < i ; a++){
        for(int b = 0 ; b < i ; b++){
            x[b] = ' ';
        }
        x[a] = y[a];
        x[i - a - 1] = y[i - a - 1];
        for(int b = 0 ; b < i ; b++){
            printf("%c", x[b]);
        }
        printf("\n");
    }
}

void p4(int i){
    char y[] = "123456789";
    char x[2*i+3];
    for(int a = 0 ; a < i ; a++){
        for(int b = 0 ; b < 2*i ; b++){
            x[b] = ' ';
        }
        int j = a;
        int k = 0;
        while(j >= 0){
            x[i - 1 + k] = y[j];
            x[i - 1 - k] = y[j];
            j--;
            k++;
        }
        for(int b = 0 ; b < 2*i ; b++){
            printf("%c", x[b]);
        }
        printf("\n");
    }
}