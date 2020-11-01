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
    int getDecimalValue(ListNode* head) {
        int cnt=0,sum=0;
        ListNode*p=head;
        while(p->next!=NULL)
        {
            cnt+=1;
            p=p->next;
        }
        p=head;
        while(p->next!=NULL)
        {
            if(p->val)
            sum+=(1<<cnt);
            cnt-=1;
            p=p->next;
        }
        if(p->val)
            sum+=1;
        return sum;
    }
};
