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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int d=0,c=0;
        ListNode *tail = new ListNode();
        tail->next = NULL;
        ListNode *head = NULL;
        while(1)
        {
            if(l1==NULL && l2==NULL)   break;
            if(l2==NULL)
            {
                d = l1->val;
                l1 = l1->next;
            }
            else if(l1==NULL)
            {
                d = l2->val;
                l2 = l2->next;
            }
            else
            {
                d = l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }
            ListNode *temp = new ListNode((d+c)%10);
            tail->next = temp;
            tail = temp;
            if(head==NULL)   head = tail;
            c = (d+c)/10;
        }
        if(c)
        {
            ListNode *temp = new ListNode(c);
            tail->next = temp;
            tail = temp;
        }
        return head;
    }
};
