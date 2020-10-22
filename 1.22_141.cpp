/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p=head,*q;
        if(head)
        {
            if(head->next)
            {
            q=p->next->next;
            int flag=0;
            while(p!=NULL&&q!=NULL)
            {
                if(p==q)
                {
                    flag=1;
                    break;
                }
                p=p->next;
                if(q->next)
                q=q->next->next;
                else
                    q=q->next;
            }
            if(flag)
                return true;
            else
                return false;
            }
            else
                return false;
        }
        return false;
        
    }
};
