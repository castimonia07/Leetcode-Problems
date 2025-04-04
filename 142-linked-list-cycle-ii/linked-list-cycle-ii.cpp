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
    ListNode *detectCycle(ListNode *head) {
        // ListNode* temp=head;
        // unordered_map<ListNode*,int> m;
        // while(temp!=nullptr){
        //     if(m.find(temp)!=m.end()){
        //         return temp;
        //     }
        //     m[temp]=1;
        //     temp=temp->next;
        // }
        // return nullptr;

        //wecan solve this without using the map too

        ListNode* temp= head;
        unordered_set<ListNode*> m;
        while(temp!=nullptr){
            if(m.find(temp)!=m.end()){
                return temp;
            }
            m.insert(temp);
            temp=temp->next;
        }
        return nullptr;
    }
};