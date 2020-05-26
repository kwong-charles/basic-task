#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char queue[15];
int back = 0;
int front = 0;
char c;
char temp;

void enq();
char deq();
int ism();
int isf();
void pq();

void enq(){
    if(isf() == 1){
        printf("enter character to push");
        scanf(" %c", &temp);
        queue[back%15] = temp;
        back++;
    }
    else{
        printf("queue is full\n");
        pq();
    }
}

char deq(){
    if(ism() == 1){
        char c = queue[front%15];
        return c;
    }
    else{
        printf("queue is empty\n");
        return 'a';
    }
}

int ism(){
    if(back == front){
        return 0;
    }
    else{
        return 1;
    }
}

int isf(){
    if(back - front == 15){
        return 0;
    }
    else{
        return 1;
    }
}

void pq(){
    if(ism() == 1){
        if(back%15 > front%15){
            for(int i = front%15 ; i < back%15 ; i++){
                printf("%c", queue[i]);
            }
        }
        else{
            for(int i = front%15 ; i < 15; i++){
                printf("%c", queue[i]);
            }
            for(int i = 0 ; i < back%15; i++){
                printf("%c", queue[i]);
            }
        }
        printf("\n");
    }
    else{
        printf("This bitch empty. YEET\n");
    }
}

int main(){
    while(true){
        printf("enter e to push, d to pop, p to print queue\t");
        scanf(" %c", &c);
        if(c == 'e'){
            enq();
        }
        else if(c == 'd'){
            temp = deq();
            if(ism() == 1){
                printf("%c\n", temp);
                front++;
            }
        }
        else if(c == 'p'){
            pq();
        }
        else{
            printf("invalid entry\n");
        }
        printf("%d, %d\n", front, back);
        printf("%d, %d\n", front%15, back%15);
    }
}