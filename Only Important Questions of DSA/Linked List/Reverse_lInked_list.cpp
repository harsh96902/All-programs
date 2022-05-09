#include<iostream>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next;
};
class Solution{
    public:
    void display(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    }
    void insertAtHead(ListNode* &head,int val){
    ListNode* n = new ListNode();
    // node* n = new node(val);   // if we use constructor
    n->data = val;
    n->next = head;
    head = n;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* Next = NULL;
        ListNode* prev = NULL;
        while(temp != NULL){
            Next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = Next;
        }
        return prev;
    
    }
};
int main(){
    ListNode* head = NULL;
    Solution s;
    s.insertAtHead(head,3);
    s.insertAtHead(head,1);
    s.insertAtHead(head,0);
    s.insertAtHead(head,4);
    s.insertAtHead(head,2);
    head = s.reverseList(head);
    s.display(head);
}