/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
		Runtime = 12 ms;
		memory = 15 mb;
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if list one is null return list two;
        if (list1 == NULL && list2 == NULL)
        {
            return NULL;
        }     
        
        vector<int> l;
        while(list1){
            l.push_back(list1 -> val);
            list1 = list1 -> next;
        }
        while(list2){
            l.push_back(list2 -> val);
            list2 = list2 -> next;
        }
        //sorting array;
        sort (l.begin(), l.end());
        
        ListNode* res = new ListNode(l[0]);
        ListNode* temp = res;
        
        for (int counter = 1; counter < l.size();)
        {
            ListNode* tempNode = new ListNode(l[counter]);
            temp -> next = tempNode;
            temp = tempNode;
            counter++;
        }
        return res;
        
    }
};