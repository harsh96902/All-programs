#include<iostream>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next;
};
class Solution {
public:
    void insertAtHead(ListNode* &head,int val){
    ListNode* n = new ListNode();
    // node* n = new node(val);   // if we use constructor
    n->data = val;
    n->next = head;
    head = n;
    }
    bool hasCycle(ListNode *head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        while(temp1 && temp2 && temp2->next){
            temp1 = temp1->next;
            temp2 = temp2->next->next;
            if(temp1 == temp2){
                return true;
            }
        }
        return false;
    }
    // void createCycle(ListNode* &head){
    //     ListNode* temp = head;
    //     // ListNode* t =  NULL;
    //     while(temp != NULL){
    //         temp = temp->next;
    //         // t = temp;
    //     }
    //     temp->next = head;
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
    // s.createCycle(head);
    cout<<s.hasCycle(head);
    // s.display(head);
}