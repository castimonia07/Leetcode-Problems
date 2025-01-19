/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        while(temp1!=nullptr){
            ListNode* temp2=headB;
            while(temp2!=nullptr){
                if(temp1==temp2){
                    return temp1;
                    break;
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;           
        }
        return nullptr;
    }
};