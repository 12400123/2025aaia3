//week13-2.cpp 學習計畫Linked List 第一題
//21. Merge Two Sorted Lists 左邊list1 右邊list2 合起來
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode * ans = new ListNode(999);
        ListNode * ans2 = ans;//ans2幫忙ans把尾巴接好
        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1->val < list2->val)//左邊小先接左邊
            {
                ans2->next = list1;//接起來
                list1=list1->next;//往右下一筆
                ans2 = ans2->next;//往右下一筆
            }
            else//右邊小先接右邊
            {
                ans2->next = list2;//接起來
                list2=list2->next;//往右下一筆
                ans2 = ans2->next;//往右下一筆
            }
            
        }
        if(list1 != nullptr) ans2->next = list1;
        if(list2 != nullptr) ans2->next = list2;
        //還沒寫完 但是試試看的答案是什麼
        return ans->next;
    }
};