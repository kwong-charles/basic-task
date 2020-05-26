#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char queue[15];
int back = 0;
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
        queue[back] = temp;
        back++;
    }
    else{
        printf("queue is full\n");
        pq();
    }
}

char deq(){
    if(ism() == 1){
        char c = queue[0];
        for(int i = 0 ; i < strlen(queue) - 2 ; i++){
            queue[i] = queue[i+1];
        }
        back--;
        return c;
    }
    else{
        printf("queue is empty\n");
        return 'a';
    }
}

int ism(){
    if(back == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int isf(){
    if(back == 15){
        return 0;
    }
    else{
        return 1;
    }
}

void pq(){
    if(ism() == 1){
        for(int i = 0; i < strlen(queue) ; i++){
            printf("%c", queue[i]);
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
            }
        }
        else if(c == 'p'){
            pq();
        }
        else{
            printf("invalid entry\n");
        }
    }
}