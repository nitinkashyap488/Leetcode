/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode firstPtr = headA;
        ListNode secondPtr = headB;
        
        while(firstPtr != secondPtr){
            firstPtr = firstPtr.next;
            secondPtr = secondPtr.next;
            
            if(firstPtr == secondPtr){
                return firstPtr;
            }            
            if(firstPtr == null){
                firstPtr = headB;
            }
            if(secondPtr == null){
                secondPtr = headA;
            }
        }
        return firstPtr;
    }
}