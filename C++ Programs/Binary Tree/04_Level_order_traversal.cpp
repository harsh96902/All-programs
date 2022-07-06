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
// We will done it by using queue -->
void Level_order_traversal(Node* root){
    queue<Node*>q;
    // Node* temp = new Node();
    q.push(root);
    Node* curr = NULL;
    while(!q.empty()){
        curr = q.front();
        q.pop();
        cout<<curr->data<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}
int main(){
    Node* mroot = creatingNode();
    // inOrder(mroot);
    // cout<<"\n";
    // preOrder(mroot);
    // cout<<"\n";
    // postOrder(mroot);
    Level_order_traversal(mroot);
}