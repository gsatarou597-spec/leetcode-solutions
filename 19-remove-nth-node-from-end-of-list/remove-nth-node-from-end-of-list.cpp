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
        ListNode* temp=head;
        if(head==NULL)return NULL;
        int total=0;
        while(temp!=NULL){
            total++;
            temp=temp->next;
        }
        if(total==n){
            ListNode* temp1=head;
            head=head->next;
            delete temp1;
            return head;
        }
        temp=head;
        int cnt=total-n-1;
        for(int i=0;i<cnt;i++){
            temp=temp->next;
        }
        ListNode* temp2=temp->next;
        temp->next=temp->next->next;
        delete temp2;
        return head;


        }
        
};