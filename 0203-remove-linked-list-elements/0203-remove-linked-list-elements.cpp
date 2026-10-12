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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
        if(head==nullptr) return head;
        ListNode* current;
        ListNode* prev=head;
        while(prev->next!=nullptr&&prev!=nullptr){
            if(prev->next->val==val){
                current=prev->next;
                prev->next=prev->next->next;
                current->next=nullptr;
                delete current;
            } else{
                prev=prev->next;
            }
        }
        return head;
    }
};