/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


 //Using floyd's tortoise and hare algorithm where a pointers tries to catch 
 //the other and if it did then the cycle exists
 #include <set>
class Solution {
public:
        bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            return true;
        }
        return false;

        }
};