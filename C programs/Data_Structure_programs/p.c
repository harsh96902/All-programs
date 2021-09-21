#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void display(struct Node* ptr){
    while(ptr != NULL){
        printf(" %d",ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertion_from_first(struct Node*head,int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}
int main(){
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));  
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));  
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));  
    struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));  
    head->data = 23;
    head->next = second;

    second->data = 44;
    second->next = third;

    third->data = 54;
    third->next = fourth;

    fourth->data = 88;
    fourth->next = NULL;

    head = insertion_from_first(head,99);
    display(head);

    
    return 0;
}