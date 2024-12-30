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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr) return nullptr;
        ListNode* temp=head;
        ListNode* current=head;
        while(current!=nullptr && current->next!=nullptr){
            temp=temp->next;
            current=current->next->next;
        }
        return temp;
        
    }
};