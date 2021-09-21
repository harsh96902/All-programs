#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node * left;
    struct Node * right;
    int data;
};
struct Node *creatingNode(int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
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
int isBST(struct Node *root){
    static struct Node * prev = NULL;
    if(root != NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    } 
}
struct Node *Searching_in_BT(struct Node *root,int key){
    if(root != NULL){
        if(root == NULL){
            return 0;
        }
        else if(root->data == key){
            return root;
        }
        else if(key < root->data){
            return Searching_in_BT(root->left,key);
        }
        else{
            return Searching_in_BT(root->right,key);
        }
    }
}
void insert_in_BST(struct Node *root,int key){
    struct Node *prev = NULL;
    while(root!=NULL){
        prev = root;
        if(key == root->data){
            printf("%d is alredy in BST",key);
            return;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }    
        
    }
    struct Node *new = creatingNode(key);
    if(key < prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }   
}
int main(){
    struct Node *p = creatingNode(7);
    struct Node *p1 = creatingNode(5);
    struct Node *p2 = creatingNode(8);
    struct Node *p3 = creatingNode(4);
    struct Node *p4 = creatingNode(6);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // preOrder_traversal(p);
    // printf("\n");
    // postOrder_traversal(p);
    // printf("\n");
    // inOreder_traversal(p);
    // printf("\n");
    // printf("%d",isBST(p));

    // struct Node * n = Searching_in_BT(p,5);
    // if(n!=NULL){
    //     printf("Found %d",n->data);
    // }
    // else{
    //     printf("Element is not found");
    // }
    insert_in_BST(p,1);
    printf("%d",p->left->left->left->data);


    return 0;
}