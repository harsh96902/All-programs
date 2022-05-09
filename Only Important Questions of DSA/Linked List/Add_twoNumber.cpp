#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
};

class Solution {
public:
    void display(ListNode* head){
        ListNode* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        }
    void insertAtHead(ListNode* &head,int value){
        ListNode* n = new ListNode();
    // node* n = new node(val);   // if we use constructor
        n->val = value;
        n->next = head;
        head = n;
    }
    ListNode* insertAtTail(ListNode* &head,int value){ 
        ListNode* n = new ListNode();
    // node* n = new node(val);  if we use constructor
        n->val = value;
        if(head == NULL){
            head = n;
            return head;
        }
        ListNode *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
        return head;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL;
        int carry = 0;
        while(l1 || l2 || carry){
            int val1 = l1?l1->val:0;
            int val2 = l2?l2->val:0;
            result = insertAtTail(result,(val1 + val2 + carry) % 10);
            carry = (val1 + val2 + carry)/10;
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }
        return result;
    }
};
int main(){
    ListNode* head = NULL;
    ListNode* head2 = NULL;    
    ListNode* head3 = NULL;    
    Solution s;
    s.insertAtHead(head,3);
    s.insertAtHead(head,1);
    s.insertAtHead(head,0);
    s.insertAtHead(head,4);
    s.insertAtHead(head,2);
    s.insertAtHead(head2,3);
    s.insertAtHead(head2,2);
    s.insertAtHead(head2,9);
    s.insertAtHead(head2,1);
    s.insertAtHead(head2,2);
    s.insertAtHead(head2,0);
    s.insertAtHead(head2,4);
    head3 = s.addTwoNumbers(head,head2);
    s.display(head3);
}