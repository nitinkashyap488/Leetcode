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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode * ptr1 = head;
        ListNode * ptr2 = head;
        int count=-k;
        while(ptr2){
            ptr2 = ptr2->next;
            count++;
        }
        ptr2 = head;
        while(count--){
            ptr2=ptr2->next;
        }
        k--;
        while(k--){
            ptr1=ptr1->next;
        }
        swap(ptr1->val,ptr2->val);
        return head;
    }
};