#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node * left;
    struct Node * right;
    int data;
};
struct Node *creatingNode(){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int val;
    printf("Enter val - ");
    scanf("%d",&val);
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
void preOrder_traversal(struct Node *root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrder_traversal(root->left);  // Recursive call
        preOrder_traversal(root->right);  // Recursive call
    }
}
void postOrder_traversal(struct Node *root){
    if(root != NULL){
        postOrder_traversal(root->left);
        postOrder_traversal(root->right);
        printf("%d ",root->data);
    }
}
void inOreder_traversal(struct Node *root){
    if(root != NULL){
        inOreder_traversal(root->left);
        printf("%d ",root->data);
        inOreder_traversal(root->right);
    }
}
int main(){

     // we can done this like this too but its not much recommendable
    /*
    // Constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */
    // struct Node *p = creatingNode(4);
    // struct Node *p1 = creatingNode(1);
    // struct Node *p2 = creatingNode(6);
    // struct Node *p3 = creatingNode(5);
    // struct Node *p4 = creatingNode(2);
    
    struct Node *p = creatingNode();
    struct Node *p1 = creatingNode();
    struct Node *p2 = creatingNode();
    struct Node *p3 = creatingNode();
    struct Node *p4 = creatingNode();

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder_traversal(p);
    printf("\n");
    postOrder_traversal(p);
    printf("\n");
    inOreder_traversal(p);

    return 0;
}