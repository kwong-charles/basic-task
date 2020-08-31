# include <stdio.h>
# include <stdlib.h>

typedef struct nodee{
    int value;
    struct nodee *next;
}node;

node *head = NULL;
node *current = NULL;

node create(int value);
int printlist();

node create(int value){
    node *result = (node*) malloc(sizeof(node));
    result->value = value;
    result->next = head;
    head = result;
    return *result;
}

int printlist(){
    node *temp = head;
    while(temp != NULL){
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    return 0;
}

int maint(){
    for(int i = 0; i < 1; i++){
        create(i+1);
    }
    printlist();
    return 0;
}