#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void displayLinkedList_Traversal(struct Node *head){
    struct Node *ptr = head;
    while(ptr->next != head){
        printf("Element is %d\n",(*ptr).data);  // We can write (*ptr).data = ptr->data
        ptr=(*ptr).next;
    }
    printf("Element is %d\n",(*ptr).data);  // We can write (*ptr).data = ptr->data

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
    displayLinkedList_Traversal(head);  
  
    return 0;
}