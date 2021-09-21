#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void display(struct Node *top){
    while(top != NULL){
        printf("Element is  %d \n",top->data);
        top = top->next;
    }
}
int IsEmpty(struct Node *top){
    if(top == NULL){
        printf("Stack is full\n");
    }
    else{
        return 0;
    } 
}
int IsFull(){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if(ptr == NULL){
        printf("Stack is full\n");
    }
    else{
        return -1;
    }
}
struct Node *push(struct Node *top,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    if(ptr == NULL){
        printf("Stack is full ");
    }
    else{
        ptr->next = top;
        top = ptr;
    }
    return top;
}
struct Node *pop(struct Node *top){
    struct Node *ptr = top;
    if(top == NULL){
        printf("Stack is Empty");
    }
    else{
        top = top->next;
        free(ptr);
    }
    return top;
}
int main(){
    struct Node *top;
    struct Node *second;
    struct Node *third;

    top = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    top->data = 23;
    top->next = second;

    second->data = 44;
    second->next = third;

    third->data = 55;
    third->next = NULL;

    // top = push(top,99);
    top = pop(top);
    display(top);

    return 0;
}