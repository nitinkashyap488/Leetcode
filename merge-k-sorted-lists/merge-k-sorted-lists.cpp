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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>, greater<int>> minHeap;
        for(auto head:lists){
            while(head){
                minHeap.push(head->val);
                head = head->next;
            }
        }
        ListNode* temp = new ListNode(0);
        ListNode* ptr = temp;
        while(!minHeap.empty()){
            ptr->next = new ListNode(minHeap.top());
            minHeap.pop();
            ptr=ptr->next;
        }
        return temp->next;
    }
};