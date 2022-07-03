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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* currentNode = head;
        ListNode* prevNode = NULL;
        while (currentNode->next!=NULL)
        {
            prevNode = currentNode;
            currentNode = currentNode->next;
            currentNode->next = prevNode;
        }
    }
};

int main(void) 
{
    ListNode* reverseList(ListNode* head) {
        ListNode* currentNode = head;
        ListNode* prevNode = NULL;
        while (currentNode->next!=NULL)
        {
            prevNode = currentNode;
            currentNode = currentNode->next;
            currentNode->next = prevNode;
        }
    }
}
