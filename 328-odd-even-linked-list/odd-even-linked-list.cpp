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
        vector<int> v;
        ListNode* temp=head;
        int index=1;
        vector<int> eve,odd;
        while(temp!=nullptr){
            if(index%2==0){
                eve.push_back(temp->val);
            }
            else{
                odd.push_back(temp->val);
            }
            temp=temp->next;
            index++;
        }
        vector<int> combo=odd;
        combo.insert(combo.end(),eve.begin(),eve.end());

        temp=head;
        for(int val:combo){
            temp->val=val;
            temp=temp->next;
        }
        return head;
        
    }
};