#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    // node(int val){    // constructor
        // data = val;    // we can use constructor
        // next = NULL;
    // }
};

void insertAtTail(node* &head,int val){ 
    node* n = new node();
    // node* n = new node(val);  if we use constructor
    n->data = val;
    if(head == NULL){
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
}
void insertAtHead(node* &head,int val){
    node* n = new node();
    // node* n = new node(val);   // if we use constructor
    n->data  = val;
    n->next = head;
    head = n;
}
void display(node* head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head,int k){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == k){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void reverse(node* &head){
    node* temp = head;
    node* prev = NULL;
    node* next = NULL;
    while(temp != NULL){
        next = temp->next;  // store the next

        temp->next = prev;   // reverse the pointer

        // move pointer one position ahead
        prev = temp;   
        temp = next;   
        
    }
    head = prev;

}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,0);
    reverse(head);
    display(head);
    // cout<<search(head,3);
}

// void reverse(node* &head){
//     node* temp = head;
//     node* next = NULL;
//     node* prev = NULL;
//     while(temp != NULL){
//         next = temp->next;

//         temp->next = prev;

//         prev = temp;
//         temp = next;

//     }
    
// }