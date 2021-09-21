#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void displayCircular_LinkedList_Traversal(struct Node *head){
    struct Node *ptr = head;
    while(ptr->next != head){
        printf("Element is %d\n",(*ptr).data);  // We can write (*ptr).data = ptr->data
        ptr=(*ptr).next;
    }
    printf("Element is %d\n",(*ptr).data);  // We can write (*ptr).data = ptr->data

}
struct Node *Insertion_at_the_first(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    (*ptr).data = data;
    struct Node *p = (*head).next;

    while(p->next != head){
        p = (*p).next;
    }
    (*p).next = ptr;
    (*ptr).next = head;
    return ptr;
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct  Node *)malloc(sizeof(struct Node));    
    second = (struct  Node *)malloc(sizeof(struct Node));    
    third = (struct  Node *)malloc(sizeof(struct Node));

    (*head).data = 12;
    (*head).next = second;

    (*second).data = 45;
    (*second).next = third;

    (*third).data = 53;
    (*third).next = head;
    printf("Circular linked list Before insertion at the first :\n");
    displayCircular_LinkedList_Traversal(head);

    head = Insertion_at_the_first(head,11); 
    printf("Circular linked list After insertion at the first :\n");
    displayCircular_LinkedList_Traversal(head);

    return 0;
}