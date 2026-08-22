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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(fast->next==NULL) return NULL;
        while(fast->next->next!=NULL && fast->next->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }
        slow->next=slow->next->next;
        return head;
 
//      if (head == NULL || head->next == NULL)
//             return NULL;
//    int len=0;
//         ListNode* temp=head;

//         while(temp!=NULL){
//             len++;
//             temp=temp->next;
//         }
//         int mididx=len/2;
//         ListNode* mid=head;
//         for(int i=1;i<mididx;i++){
//             mid=mid->next;
        
//         }
//         mid->next=mid->next->next;
//         return head;

    }
};