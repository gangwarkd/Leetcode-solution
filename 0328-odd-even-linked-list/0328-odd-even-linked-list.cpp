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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* lo= new ListNode(100);
        ListNode* hi= new ListNode(200);
        ListNode* tl=lo;
        ListNode* th=hi;
        ListNode* temp=head;
        int idx=1;
        while(temp!=NULL){
            if(idx%2==1){
                tl->next=temp;
                temp=temp->next;
                tl=tl->next;


            }else{
                 th->next=temp;
                temp=temp->next;
                th=th->next;
            

            }
            idx++;
        }
        tl->next=hi->next;
        th->next=NULL;
        return lo->next;
    }
};