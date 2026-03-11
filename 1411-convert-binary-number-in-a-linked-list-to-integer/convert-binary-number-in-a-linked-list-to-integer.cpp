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
        vector<int> bn;
        ListNode* temp=head;
        while(temp != NULL)
        {
           bn.push_back(temp->val);
           temp=temp->next;
        }
        int n=bn.size()-1;
        int dn=0;
        int j=0;
        while(n>=0)
        {
            dn+=bn[j]*pow(2,n);
            n--;
            j++;
        }
        return dn;
    }
};