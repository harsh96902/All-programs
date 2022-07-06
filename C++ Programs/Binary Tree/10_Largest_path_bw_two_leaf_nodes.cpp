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
int LargestPathTwoNodes(Node* root){
    if(root == NULL) return 0;
    int ld = LargestPathTwoNodes(root->left);
    int rd = LargestPathTwoNodes(root->right);

    int curr = height(root->left) + height(root->right) + 1;
    return max(curr,max(ld,rd));
}
int height(Node* root){
    if(root == NULL) return 0;
    return max(height(root->left),height(root->right)) + 1;
}
void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
    Node* mroot = creatingNode();
    // inOrder(mroot);
    cout<<LargestPathTwoNodes(mroot);
}