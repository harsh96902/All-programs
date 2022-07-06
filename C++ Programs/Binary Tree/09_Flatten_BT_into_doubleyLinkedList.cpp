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

class Solution {
public:
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
    Node* head = NULL;
    Node* prev = NULL;
    void flatten(Node* root) {
        if(root == NULL) return;
        flatten(root->left);
        if(prev == NULL){
            head = root;
        }
        else{
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        flatten(root->right);
    }
    void inOrder(Node* root){
        if(root == NULL) return;
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
};
int main(){
    
    Solution s;
    Node* mroot = s.creatingNode();
    s.flatten(mroot);
    // s.inOrder(mroot);  // will solve the traversal problem
}