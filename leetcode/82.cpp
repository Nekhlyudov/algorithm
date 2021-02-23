class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
             if(head==NULL||head->next==NULL)return head;
            ListNode *prev=NULL;
            for(ListNode *i=head;i!=NULL;i=i->next){
                ListNode *temp=i;
                ListNode *del=NULL;
                bool flag=false;
                while(i->next!=NULL&&i->val==i->next->val){
                      del=i;
                      i=i->next;
                      del=NULL;flag=true;
                }
                if(flag&&prev!=NULL)
                prev->next=i->next;
                else if(flag)head=i->next;
                if(!flag)
                prev=i;
            }
            return head;

    }
};
