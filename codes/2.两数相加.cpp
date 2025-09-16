/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
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
        ListNode ansNode(0);
        ListNode *cur = &ansNode;
        bool carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry){
            int sum = carry;
            if(l1 != nullptr) {sum += l1->val;l1 = l1->next;}
            if(l2 != nullptr) {sum += l2->val;l2 = l2->next;}

            carry = sum/10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
        }
        return ansNode.next;
    }
};
// @lc code=end

