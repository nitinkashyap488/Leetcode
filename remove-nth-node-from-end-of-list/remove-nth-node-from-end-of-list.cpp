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
        ListNode* temp = new ListNode(NULL);
        temp->next =head;
        ListNode * first = temp;
        ListNode * second = temp;
        for(int i=0;i<=n;i++){
            first = first->next;
        }
        while(first!=NULL){
            first = first -> next;
            second = second -> next;
        }
        second->next = second->next->next;
        return temp->next;
    }
};