/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* reverse(ListNode* head) {
     ListNode* prev=NULL;
     ListNode* curr=head;
     ListNode* Next=head;
     while(curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
     }
     return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        // ListNode* c=new ListNode(10);
        //     ListNode* temp=head;
        //     ListNode*  tempC=c;
        //     while(temp!=NULL){
        //         ListNode* Node=new ListNode(temp->val);
        //             tempC->next=Node;
                    
        //             temp=temp->next;
        //             tempC=tempC->next;
        //         }
        //         c=c->next;
        //         c=reverse(c);
        //         ListNode* a=head;
        //         ListNode* b=c;
        //         while(a!=NULL){
        //             if(a->val!=b->val)  {
        //                  return false;
        //             }
        //                 a=a->next;
        //                 b=b->next;
                    
        //         }
        //             return true;
                
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
    }

ListNode*newhead=reverse(slow->next);
ListNode* a=head;
ListNode* b=newhead;
while(b!=NULL){
    if(a->val!=b->val)   return false;
    a=a->next;
    b=b->next;
}
return true;

            
    }    
        
    
};