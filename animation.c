#include <stdio.h>
#include <windows.h>

long long int counter = 0;

int l1 = 1;
int l2 = 1;
int l3 = 1;
int l4 = 1;
int l5 = 1;
int l6 = 1;
int l7 = 1;
int l8 = 1;

int c1 = 1;
int c2 = 0;
int c3 = 0;
int c4 = 0;
int c5 = 0;
int c6 = 0;
int c7 = 0;
int c8 = 0;

char snek[] = "AAAHH";
char snek2[] = "HHAAA";

void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();
void p8();

void check();
void loop();

int main(){
    while(TRUE){
        if(c1 == 1){
            p1();
            l1++;
        }
        else{
            printf(".........................");
        }
        printf("\n");
        if(c2 == 1){
            p2();
            l2++;
        }
        else{
            printf(".........................");
        }
        printf("\n");
        if(c3 == 1){
            p3();
            l3++;
        }
        else{
            printf(".........................");
        }
        printf("\n");
        if(c4 == 1){
            p4();
            l4++;
        }
        else{
            printf(".........................");
        }
        printf("\n");
        if(c5 == 1 && counter >= 100){
            p5();
            l5++;
        }
        else{
            printf(".........................");
        }
        printf("\n");
        if(c6 == 1 && counter >= 125){
            p6();
            l6++;
        }
        else{
            printf(".........................");
        }
        printf("\n");
        if(c7 == 1 && counter >= 150){
            p7();
            l7++;
        }
        else{
            printf(".........................");
        }
        printf("\n");
        if(c8 == 1 && counter >= 175){
            p8();
            l8++;
        }
        else{
            printf(".........................");
        }
        Sleep(10);
        system("cls");
        counter++;
        check();
        loop();
    }
}

void p1(){
    if(l1 <= 25){
        for(int a = 0 ; a < 25 - l1 ; a++){
        printf(".");
        }
        if(l1 <= 5){
            for(int a = 0 ; a < l1 ; a++){
                printf("%c", snek[a]);
            }
        }
        else if(l1 > 5 && l1 <= 25){
            printf("AAAHH");
            for(int a = 0 ; a < l1 - 5; a++){
            printf(".");
            }
        }   
    }
    else{
        for(int a = l1 - 25 ; a < 5 ; a++){
            printf("%c", snek[a]);
        }
        for(int a = 0 ; a < l1 - 5 ; a++){
            printf(".");
        }
    } 
}

void p2(){
    if(l2 <= 25){
        if(l2 <= 5){
            for(int a = 5 - l2 ; a < 5 ; a++){
                printf("%c", snek2[a]);
            }
        }
        else if(l2 > 5 && l2 <= 25){
            for(int a = 0 ; a < l2 - 5; a++){
            printf(".");
            }
            printf("HHAAA");
        }
        for(int a = 0 ; a < 25 - l2 ; a++){
        printf(".");
        }   
    }
    else{
        for(int a = 0 ; a < l2 - 5 ; a++){
            printf(".");
        }
        for(int a = 0 ; a < 30 - l2 ; a++){
            printf("%c", snek2[a]);
        }
    } 
}

void p3(){
    if(l3 <= 25){
        for(int a = 0 ; a < 25 - l3 ; a++){
        printf(".");
        }
        if(l3 <= 5){
            for(int a = 0 ; a < l3 ; a++){
                printf("%c", snek[a]);
            }
        }
        else if(l3 > 5 && l3 <= 25){
            printf("AAAHH");
            for(int a = 0 ; a < l3 - 5; a++){
            printf(".");
            }
        }   
    }
    else{
        for(int a = l3 - 25 ; a < 5 ; a++){
            printf("%c", snek[a]);
        }
        for(int a = 0 ; a < l3 - 5 ; a++){
            printf(".");
        }
    } 
}

void p4(){
    if(l4 <= 25){
        if(l4 <= 5){
            for(int a = 5 - l4 ; a < 5 ; a++){
                printf("%c", snek2[a]);
            }
        }
        else if(l4 > 5 && l4 <= 25){
            for(int a = 0 ; a < l4 - 5; a++){
            printf(".");
            }
            printf("HHAAA");
        }
        for(int a = 0 ; a < 25 - l4 ; a++){
        printf(".");
        }   
    }
    else{
        for(int a = 0 ; a < l4 - 5 ; a++){
            printf(".");
        }
        for(int a = 0 ; a < 30 - l4 ; a++){
            printf("%c", snek2[a]);
        }
    } 
}

void p5(){
    if(l5 <= 25){
        for(int a = 0 ; a < 25 - l5 ; a++){
        printf(".");
        }
        if(l5 <= 5){
            for(int a = 0 ; a < l5 ; a++){
                printf("%c", snek[a]);
            }
        }
        else if(l5 > 5 && l5 <= 25){
            printf("AAAHH");
            for(int a = 0 ; a < l5 - 5; a++){
            printf(".");
            }
        }   
    }
    else{
        for(int a = l5 - 25 ; a < 5 ; a++){
            printf("%c", snek[a]);
        }
        for(int a = 0 ; a < l5 - 5 ; a++){
            printf(".");
        }
    } 
}

void p6(){
    if(l6 <= 25){
        if(l6 <= 5){
            for(int a = 5 - l6 ; a < 5 ; a++){
                printf("%c", snek2[a]);
            }
        }
        else if(l6 > 5 && l6 <= 25){
            for(int a = 0 ; a < l6 - 5; a++){
            printf(".");
            }
            printf("HHAAA");
        }
        for(int a = 0 ; a < 25 - l6 ; a++){
        printf(".");
        }   
    }
    else{
        for(int a = 0 ; a < l6 - 5 ; a++){
            printf(".");
        }
        for(int a = 0 ; a < 30 - l6 ; a++){
            printf("%c", snek2[a]);
        }
    } 
}

void p7(){
    if(l7 <= 25){
        for(int a = 0 ; a < 25 - l7 ; a++){
        printf(".");
        }
        if(l7 <= 5){
            for(int a = 0 ; a < l7 ; a++){
                printf("%c", snek[a]);
            }
        }
        else if(l7 > 5 && l7 <= 25){
            printf("AAAHH");
            for(int a = 0 ; a < l7 - 5; a++){
            printf(".");
            }
        }   
    }
    else{
        for(int a = l7 - 25 ; a < 5 ; a++){
            printf("%c", snek[a]);
        }
        for(int a = 0 ; a < l7 - 5 ; a++){
            printf(".");
        }
    } 
}

void p8(){
    if(l8 <= 25){
        if(l8 <= 5){
            for(int a = 5 - l8 ; a < 5 ; a++){
                printf("%c", snek2[a]);
            }
        }
        else if(l8 > 5 && l8 <= 25){
            for(int a = 0 ; a < l8 - 5; a++){
            printf(".");
            }
            printf("HHAAA");
        }
        for(int a = 0 ; a < 25 - l8 ; a++){
        printf(".");
        }   
    }
    else{
        for(int a = 0 ; a < l8 - 5 ; a++){
            printf(".");
        }
        for(int a = 0 ; a < 30 - l8 ; a++){
            printf("%c", snek2[a]);
        }
    } 
}

void check(){
    if(l1 > 30){
        c1 = 0;
    }
    if(l2 > 30){
        c2 = 0;
    }
    if(l3 > 30){
        c3 = 0;
    }
    if(l4 > 30){
        c4 = 0;
    }
    if(l5 > 30){
        c5 = 0;
    }
    if(l6 > 30){
        c6 = 0;
    }
    if(l7 > 30){
        c7 = 0;
    }
    if(l8 > 30){
        c8 = 0;
    }
}

void loop(){
    if(counter%100 == 0){
        c1 = 1;
        l1 = 1;
    }
    if((counter - 25)%100 == 0){
        c2 = 1;
        l2 = 1;
    }
    if((counter - 50)%100 == 0){
        c3 = 1;
        l3 = 1;
    }
    if((counter - 75)%100 == 0){
        c4 = 1;
        l4 = 1;
    }
    if((counter - 100)%100 == 0){
        c5 = 1;
        l5 = 1;
    }
    if((counter - 125)%100 == 0){
        c6 = 1;
        l6 = 1;
    }
    if((counter - 150)%100 == 0){
        c7 = 1;
        l7 = 1;
    }
    if((counter - 175)%100 == 0){
        c8 = 1;
        l8 = 1;
    }
}