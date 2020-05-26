#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char test[10000];
char myStack[500];
int top = -1;
int mt;
int check = 0;
int j = 0;

int isEmpty(void);
void push(char ch);
void pop(void);


int isEmpty(void){
   if(top == -1){
       return 0;
   }
   else{
       return 1;
   }
}

void push(char ch){
   top++;
   myStack[top] = ch;
}

void pop(void) {
   top--;
}

int main(){
    fgets(test, 10001, stdin);
    while(test[0] != '\0' && check == 0){
        j = 1;
        for(int i = 0 ; i < strlen(test) - 1 ; i++){
            if(test[i] == '{' || test[i] == '[' || test[i] == '('){
                push(test[i]);
            }
            else if(test[i] == '}' || test[i] == ']' || test[i] == ')'){
                mt = isEmpty();
                if(mt == 0){
                    check = 1;
                    break;
                }
                if(myStack[top] == '{' && test[i] == '}'){
                    pop();
                }
                else if(myStack[top] == '[' && test[i] == ']'){
                    pop();
                }
                else if(myStack[top] == '(' && test[i] == ')'){
                    pop();
                }
                else{
                    check = 1;
                    break;
                }
            }
        }
        mt = isEmpty();
        if(mt != 0){
            check = 1;
        }
        break;
    }
    if(check == 0 || j == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    system("pause");
}