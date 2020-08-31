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
int replace();
int remove();
int add();
int search();


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
        printf("%d\t", temp->value);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}

int replace(){
    int temp1, temp2;
    node *temp = head;
    printf("Enter which node to replace (1 for first, 2 for second etc)\n");
    scanf(" %d", &temp1);
    printf("Enter what to replace its value with\n");
    scanf(" %d", &temp2);
    for(int i = 1; i < temp1; i++){
        temp = temp->next;
    }
    temp->value = temp2;
    printlist();
    return 0;
}

int remove(){
    int temp1;
    node *temp = head, *k;
    printf("Enter which node to remove (1 for first, 2 for second etc)\n");
    scanf(" %d", &temp1);
    if(temp1 != 1){
        for(int i = 1; i < temp1 - 1; i++){
        temp = temp->next;
        }
        k = temp->next->next;
        free(temp->next);
        temp->next = k;
    }
    else{
        k = head->next;
        free(head);
        head = k;
    }
    printlist();
    return 0;
}

int add(){
    int temp1, temp2;
    node *temp = head;
    printf("Enter where to insert the node\n");
    scanf(" %d", &temp1);
    printf("Enter the value of the node\n");
    scanf(" %d", &temp2);
    if(temp1 != 1){
        for(int i = 1; i < temp1 - 1; i++){
            temp = temp->next;
        }
        node *result = (node*) malloc(sizeof(node));
        result->next = temp->next;
        temp->next = result;
        result->value = temp2;
    }
    else{
        create(temp2);
    }
    printlist();
}

int search(){
    int temp1, counter = 1, flag = 0;
    node *temp = head, *k;
    printf("Enter what to search for\n");
    scanf(" %d", &temp1);
    while(temp != NULL){
        if(temp->value == temp1){
            flag = 1;
            break;
        }
        counter++;
        temp = temp->next;
    }
    if(flag == 1){
        printf("Item found in node %d\n", counter);
    }
    else{
        printf("Item not found\n");
    }
    printlist();
    return 0;
}

int main(){
    for(int i = 0; i < 10; i++){
        create(i+1);
    }
    printlist();
    search();
    replace();
    remove();
    add();
    system("pause");
    return 0;
}
