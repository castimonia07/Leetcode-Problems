/**+*-*
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(head!=nullptr && temp->next!=nullptr){
            int data=gcd(temp->val,temp->next->val);
            ListNode* gcdnode= new ListNode(data);
            gcdnode->next=temp->next;
            temp->next=gcdnode;
            temp=gcdnode->next;
        }
        return head;
    }
};