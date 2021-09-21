#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void displayLinkedList_Traversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element is %d\n",(*ptr).data);  // We can write (*ptr).data = ptr->data
        ptr=(*ptr).next;
    }
}
struct Node *Insertion_at_the_beginning(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    (*ptr).next = head;
    (*ptr).data = data;
    return ptr;
}
struct Node *Insertion_at_the_between(struct Node *head,int data,int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i =0;
    while(i!=index-1){
        p = (*p).next;
        i++;
    }
    (*ptr).data = data;
    (*ptr).next=(*p).next;
    (*p).next = ptr;
    return head;
}
struct Node *Insertion_at_the_end(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while((*p).next!=NULL){
        p = (*p).next;
    }
    (*ptr).data = data;
    (*p).next = ptr;
    (*ptr).next = NULL;
    return head;
}
struct Node *Insertion_after_a_node(struct Node *head,struct Node *prevNode,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    (*ptr).data = data;
    (*ptr).next = (*prevNode).next;
    (*prevNode).next = ptr;
    return head;
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
    (*third).next = NULL;
    cout<<"Before insertion the linked list is :-- "<<endl;
    displayLinkedList_Traversal(head);

    int num,element,index;
    cout<<"Where you want to insert :--"<<endl;
    cout<<"Enter 1 to  insert at the beginning"<<endl;
    cout<<"Enter 2 to  insert at the between"<<endl;
    cout<<"Enter 3 to  insert at the end"<<endl;
    cout<<"Enter 4 to  insert after a node"<<endl;
    cin>>num;

    cout<<"Enter the element you want to insert : ";
    cin>>element;

    if(num == 1){
        cout<<"After insertion at the beginning :-"<<endl; 
        head = Insertion_at_the_beginning(head,element);
        displayLinkedList_Traversal(head); 
    }

    else if(num == 2){
        cout<<"Enter the index no. :";
        cin>>index;
        cout<<"After insertion at the between :-"<<endl; 
        head = Insertion_at_the_between(head,element,index);
        displayLinkedList_Traversal(head);

    }
    else if(num == 3){
        cout<<"After insertion at the end :-"<<endl; 
        head = Insertion_at_the_end(head,element);
        displayLinkedList_Traversal(head);
    }
    else{
        cout<<"After insertion at the after any node :-"<<endl; 
        head = Insertion_after_a_node(head,second,element);
        displayLinkedList_Traversal(head);
    }
    return 0;
}