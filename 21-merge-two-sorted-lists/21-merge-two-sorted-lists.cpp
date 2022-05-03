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
        ListNode *head,*tmp;
        bool flg=1;
        while(list1 or list2){
            if(!list1){
                if(flg){
                    head=list2;
                    flg=0;
                    tmp=list2;
                }
                else{
                tmp->next=list2;
                tmp=tmp->next;
                }
                    list2=list2->next;
            }
            else if(!list2) {
                if(flg){
                    head=list1;
                    flg=0;
                    tmp=list1;
                }
                else{
                tmp->next=list1;
                tmp=tmp->next;
                }
                    list1=list1->next;
            }
            else{
                if(list1->val<=list2->val){
                   
               if(flg){
                    head=list1;
                    flg=0;
                    tmp=list1;
                }
                else{
                
                    tmp->next=list1;
                    tmp=tmp->next;
                }
                list1=list1->next;
                
                }
                else{
                     if(flg){
                    head=list2;
                 tmp=list2;
                         flg=0;
                }
                    else{
                    tmp->next=list2;
                tmp=tmp->next;
                    }
                list2=list2->next;
                }
            }
        }
        return head;
    }
};