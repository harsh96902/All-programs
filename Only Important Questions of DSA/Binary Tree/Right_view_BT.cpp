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
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> result;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            int count = q.size();
            for(int i = 0;i<count;i++){
                Node* curr = q.front();
                q.pop();
                
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                if(i == count - 1){
                    v.push_back(curr->data);
                }
            }
            result.push_back(v);
        }
        return result;
    }
};
int main(){
    
    Solution s;
    Node* mroot = s.creatingNode();
    vector<vector<int>>vec = s.levelOrder(mroot);
    for(auto x : vec){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<"\n";
    }  
}