#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void display_Linked_List(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element is %d \n",(*ptr).data);
        ptr = (*ptr).next;
    }
}
struct Node *Deletion_at_the_first(struct Node *head){
    struct Node *ptr = head;
    head = (*ptr).next;
    free(ptr);
    return head;
}
struct Node *Deletion_in_the_between(struct Node *head,int index){
    struct Node *p = head;
    struct Node *q = (*p).next;
    int i = 0;
    while(i!=index-1){
        p = (*p).next;
        q = (*q).next;
        i++;
    }
    (*p).next = (*q).next;
    free(q);
    return head; 
}
struct Node *Deletion_at_the_end(struct Node *head){
    struct Node *ptr = head;
    struct Node *q = (*ptr).next;
    while(q->next!=NULL){
        ptr = (*ptr).next;  //remember this*********
        q = (*ptr).next;
    }
    (*ptr).next = NULL;
    free(q);
    return head;
}
struct Node *Deletion_at_After_A_Node(struct Node *head,struct Node *prevNode){
    struct Node *ptr = (*prevNode).next;
    (*prevNode).next = (*ptr).next;
    free(ptr);
    return head;
    
}    
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    (*head).data = 45;
    (*head).next = second;

    (*second).data = 76;
    (*second).next = third;

    (*third).data = 88;
    (*third).next = fourth;
    
    (*fourth).data = 111;
    (*fourth).next = NULL;
    printf("Before deletion linked list :\n ");
    display_Linked_List(head);

    int num,index;
    printf("Where you want to delete :--\n");
    printf("Enter 1 to  delete at the beginning\n");
    printf("Enter 2 to  delete at the between\n");
    printf("Enter 3 to  delete at the end\n");
    printf("Enter 4 to  delete after a given node\n");
    scanf("%d",&num);

    if(num == 1){
        head = Deletion_at_the_first(head);
        printf("After deletion from the first\n");
        display_Linked_List(head);
    }
    else if(num == 2){
        printf("Enter the index at which you want to delete : ");
        scanf("%d",&index);
        head = Deletion_in_the_between(head,index);
        printf("After deletion in between \n");
        display_Linked_List(head);
    }
    else if(num == 3){
        head = Deletion_at_the_end(head);
        printf("After deletion at the end \n");
        display_Linked_List(head);
    }
    else if(num == 4){
        head = Deletion_at_After_A_Node(head,second);
        printf("After deletion at after a given Node \n");
        display_Linked_List(head);
    }
    else{
        printf("Enter a valid number");
    }
    return 0;
}