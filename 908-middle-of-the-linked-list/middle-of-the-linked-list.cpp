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
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int mid1=cnt/2;
        int mid2=(cnt/2)+1;
        if(cnt%2==0){
            int cnt1=0;
            while(temp!=NULL){
                if(cnt1==mid1){
                    break;
                }
                temp=temp->next;
                cnt1++;
            }
        }
        else{
            int cnt2=0;
            while(temp!=NULL){
                if(cnt2==mid1){
                    break;
                }
                temp=temp->next;
                cnt2++;
            }

        }
        return temp ;
        
        
    }
};