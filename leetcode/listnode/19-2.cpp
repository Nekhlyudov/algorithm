class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
             ListNode dummy{-1,head};
             ListNode *lef=&dummy;
             ListNode *rig=&dummy;
             for(;n>0;n--){
                 rig=rig->next;
             }
             while(rig->next!=NULL){
                  rig=rig->next;
                  lef=lef->next;
             }
             cout<<lef->val<<endl;
             ListNode *tmp=lef->next;
             lef->next=lef->next->next;
             return dummy.next;


    }
};
