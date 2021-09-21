#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
void displayLinkedList_Traversal(struct Node *ptr,struct Node *p){
    while(ptr != NULL){
        printf("Element is %d\n",(*ptr).data);  // We can write (*ptr).data = ptr->data
        ptr=(*ptr).next;   
    }
    printf("NoW in reverse order :--\n");
    while(p != NULL){
        printf("Element is %d\n",(*p).data);
        p = (*p).prev;
    }

}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct  Node *)malloc(sizeof(struct Node));    
    second = (struct  Node *)malloc(sizeof(struct Node));    
    third = (struct  Node *)malloc(sizeof(struct Node));

    (*head).prev = NULL;
    (*head).data = 12;
    (*head).next = second;

    (*second).prev = head;
    (*second).data = 45;
    (*second).next = third;

    (*third).prev = second;
    (*third).data = 53;
    (*third).next = NULL;

    displayLinkedList_Traversal(head,third); 

  
    return 0;
}