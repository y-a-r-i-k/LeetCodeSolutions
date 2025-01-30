
/**
 *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyHead = new ListNode(0);
        ListNode *curr = dummyHead;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0)
        {
            int l1Val, l2Val;
            if (l1)
            {
                l1Val = l1->val;
            }
            else
            {
                l1Val = 0;
            }
            if (l2)
            {
                l2Val = l2->val;
            }
            else
            {
                l2Val = 0;
            }

            int colSum = l1Val + l2Val + carry;
            carry = colSum / 10;

            curr->next = new ListNode(colSum % 10);
            curr = curr->next;

            if (l1)
            {
                l1 = l1->next;
            }
            else
            {
                l1 = nullptr;
            }
            if (l2)
            {
                l2 = l2->next;
            }
            else
            {
                l2 = nullptr;
            }
        }
        ListNode *res = dummyHead->next;
        delete dummyHead;
        return res;
    }
};