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
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        ListNode *ptr=head;
        int sum=0;
        while(ptr){
            if(ptr->val==0){
                sum= sum*2;
            }else{
                sum= sum*2 +1;
            }
            ptr=ptr->next;
        }
        return sum;
    }
};