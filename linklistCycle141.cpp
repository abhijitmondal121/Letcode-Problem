// Example 1:


// Input: head = [3,2,0,-4], pos = 1
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
// Example 2:


// Input: head = [1,2], pos = 0
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
// Example 3:


// Input: head = [1], pos = -1
// Output: false
// Explanation: There is no cycle in the linked list.
 





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<iostream>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // ListNode* temp=head;
        // unordered_set<ListNode*>s;
        // while(temp!=NULL){
        //     if(s.find(temp)!=s.end()){
        //         return true;
        //     }
        //     s.insert(temp);
        //     temp=temp->next;
        // }
        // return 0;
        
//         2nd method :
        
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL and fast->next!=NULL){
            
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
            
        }
        return false;
        
        
    }
};