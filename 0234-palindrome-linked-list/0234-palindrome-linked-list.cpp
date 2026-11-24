/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if( head == nullptr || head->next ==nullptr){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while( fast!= nullptr && fast -> next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr = slow;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while( curr != nullptr ){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* left = head;
        ListNode* right = prev;
        while( right!= nullptr ){
            if( left-> val != right -> val){
                return false;
            }
            left = left -> next;
            right = right-> next;
        }
        return true;
    }
};