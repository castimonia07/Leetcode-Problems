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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr){
            temp=temp->next;
            cnt++;
        }
        int a=cnt-n;
        if(a==0){
            ListNode* newHead=head->next;
            delete head;
            return newHead;
        }
        temp=head;
        for(int i=1;i<a;++i){
            temp=temp->next;
        }
        ListNode* todel=temp->next;
        temp->next = temp->next->next;
        delete todel;

        return head;
    }
};