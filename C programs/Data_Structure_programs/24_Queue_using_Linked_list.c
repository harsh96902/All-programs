#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *r = NULL;
struct Node *f = NULL;
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void enqueue(int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    if(ptr == NULL){
        printf("Queue is  full\n");
    }
    else{
        ptr->next = NULL;
        if(f == NULL){
            f = r = ptr;
            // return f;

        }
        else
        {
            r->next = ptr;
            r = ptr;
            // return r;

        }     
    }
}
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
int main(){
    // printf("Dequeuing element %d\n", dequeue(f));
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    linkedListTraversal(f);
    return 0;
}