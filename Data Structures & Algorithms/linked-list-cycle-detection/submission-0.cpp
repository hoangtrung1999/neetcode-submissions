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
    bool hasCycle(ListNode* head) {
        map<ListNode*, int> myMap;
        while (head != nullptr)
        {
            auto it = myMap.find(head);
            if (it == myMap.end())
                myMap[head] += 1;
            else
                return true;
            head = head->next;
        }
        return false;
    }
};
