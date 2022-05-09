#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
void insertAthead(node* &head, int val){
    node* temp = new node();
    temp->data = val;
    temp->next = head;
    head = temp;
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* head = NULL;
    insertAthead(head,3);
    insertAthead(head,5);
    insertAthead(head,0);
    insertAthead(head,1);
    insertAthead(head,2);
    display(head);
}