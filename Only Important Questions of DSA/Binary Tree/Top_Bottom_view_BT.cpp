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
    void topView_BottomView(Node* root) {
        if(!root) return;
        map<int,int>m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            // vector<int>v;
            Node* curr = q.front().first;
            int h = q.front().second;
            q.pop();
            // if(!m[h]){
            //     m[h] = curr->data;  // for top view
            // }
            m[h] = curr->data; // For bottom view
            if(curr->left){
                q.push({curr->left,h-1});
            }
            if(curr->right){
                q.push({curr->right,h+1});
            }
        }
        for(auto x : m){
            cout<<x.second<<" ";
        }
    }
};
int main(){
    
    Solution s;
    Node* mroot = s.creatingNode();
    s.topView_BottomView(mroot);
    // for(auto x : vec){
    //     for(auto y : x){
    //         cout<<y<<" ";
    //     }
    //     cout<<"\n";
    // }  
}