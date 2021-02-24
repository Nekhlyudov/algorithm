ass Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
            if(head==NULL)return NULL;
            
            int len=1;
            ListNode *i;
            for(i=head;i->next!=NULL;i=i->next){
               len++;
            }
            i->next=head;
            len=len-(k%len);
            for(int ii=0;ii<len;ii++){
                i=i->next;
            }
            head=i->next;
            i->next=NULL;
            return head;
    }
};
