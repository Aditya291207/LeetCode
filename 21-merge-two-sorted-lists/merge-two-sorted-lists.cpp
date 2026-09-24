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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* slow = list1;
        ListNode* fast = list2;

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while(slow != NULL && fast != NULL) {

            ListNode* newNode;

            if(slow->val < fast->val) {
                newNode = new ListNode(slow->val);
                slow = slow->next;
            }
            else {
                newNode = new ListNode(fast->val);
                fast = fast->next;
            }

            if(head == NULL) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        while(slow != NULL) {
            tail->next = new ListNode(slow->val);
            tail = tail->next;
            slow = slow->next;
        }

        while(fast != NULL) {
            tail->next = new ListNode(fast->val);
            tail = tail->next;
            fast = fast->next;
        }

        return head;
    }
};