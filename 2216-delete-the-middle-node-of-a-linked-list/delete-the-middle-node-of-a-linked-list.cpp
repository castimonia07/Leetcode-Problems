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
        if(head==nullptr || head->next==nullptr) return nullptr;
        // ListNode* temp=head;
        // int cnt=0;
        // while(temp!=nullptr){
        //     temp=temp->next;
        //     cnt+=1;
        // }
        // temp=head;
        // int n=1;
        // while(n<cnt/2){
        //     temp=temp->next;
        //     n++;
        // }
        // ListNode* del=temp->next;
        // temp->next=temp->next->next;
        // delete del;

        // return head;

        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=nullptr;
        while(fast!=nullptr && fast->next!=nullptr){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* del=temp->next;
        temp->next=slow->next;
        delete del;
        return head;
    }
};