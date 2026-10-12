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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* current=head;
        int count=0;
        if(head==nullptr || head->next==nullptr ||k==0) return head;
        while(current->next!=nullptr){
            current=current->next; count++;
        }
        count++;
        k=k%count;
        if(k==0) return head;
        current->next=head;
        int a=count-k-1;
        while(a!=0){
            head=head->next; a--;
        }
        current=head;
        head=head->next;
        current->next=nullptr;
        return head;
    }
};