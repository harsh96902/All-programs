#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    // Node(int val){
    //     data = val;
    // }
};
Node* creatingNode(){

    Node* root = NULL;
    cout<<"Enter data -> ";
    int val;
    cin>>val;
    // root->data = val;
    if(val == -1) return NULL;
    
    root = new Node();
    root->data = val;

    cout<<"Enter left for -> "<<val<<"\n";
    root->left = creatingNode();

    cout<<"Enter right for -> "<<val<<"\n";
    root->right = creatingNode();

    return root;
}
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node* root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int height(Node* root){
    if(root == NULL) return 0;
    else{
        return max(height(root->left),height(root->right)) + 1;
    }
}
int main(){
    Node* mroot = creatingNode();
    inOrder(mroot);
    cout<<"\n";
    preOrder(mroot);
    cout<<"\n";
    postOrder(mroot);
    cout<<"\n";
    cout<<height(mroot);
    
}