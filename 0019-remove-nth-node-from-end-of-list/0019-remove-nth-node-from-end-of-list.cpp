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
        ListNode* current=head;
        ListNode* prev=head;
        int count=1;
        if(head==nullptr) return head;
        while(current->next!=nullptr){
            count++;
            current=current->next;
        }
        count-=n;
        if(count==0){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        for(int i=0;i<count-1;i++){
            prev=prev->next;
        }
        current=prev->next;
        prev->next=prev->next->next;
        current->next=nullptr;
        delete current;
        return head;
    }
};