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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while( fast != nullptr && fast -> next != nullptr ){
            slow = slow ->next;
            fast = fast ->next -> next;
        }
        return slow;
        // BRUTE FORCE
        // int count = 0;
        // ListNode* temp = head;
        // while( temp != nullptr){
        //     count++;
        //     temp = temp->next;
        // }
        // int n = count/2;
        // for( int i =0 ; i<n ; i++) {
        //     head= head ->next;
        // }
        // return head;
    }
};