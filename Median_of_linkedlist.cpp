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
    ListNode* middleNode(ListNode* head) {
        typedef struct ListNode node;
        node*s=head;
        node*f=head;
        while(f!=NULL){
            f=f->next;
            if(f!=NULL){
                f=f->next;
                s=s->next;
            }
            }
        return s;
    }
};
