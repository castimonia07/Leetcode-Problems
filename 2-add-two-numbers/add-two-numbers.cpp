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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
        ListNode* curr=l2;
        vector<int> v;
        int sum=0;
        while(temp!=nullptr && curr!=nullptr){
            sum+=temp->val+curr->val;
            v.push_back(sum%10);
            sum/=10;
            temp=temp->next;
            curr=curr->next;
        }
        while(temp==nullptr && curr!=nullptr){
            sum+=curr->val;
            v.push_back(sum%10);
            sum/=10;
            curr=curr->next;
        }
        while(curr==nullptr && temp!=nullptr){
            sum+=temp->val;
            v.push_back(sum%10);
            sum/=10;
            temp=temp->next;
        }
        if(sum>0){
            v.push_back(sum);
        }
        ListNode* head= new ListNode(v[0]);
        ListNode* t=head;
        for(int i=1;i<v.size();i++){
            t->next=new ListNode(v[i]);
            t=t->next;
        }
        return head;
    }
};