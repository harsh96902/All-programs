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
    struct Node *top = NULL;
    int num,n;
    // top = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the no. of element you want to push : ");
    scanf("%d",&n);
    for(int i = 0; i < n;i++){
        
        printf("\nEnter the element : ");
        scanf("%d",&num);
        top = push(top,num);
    }
    
    // top = push(top,4);
    // top = push(top,6);
    // top = push(top,9);

    // top = pop(top);
    display(top);

    return 0;
}