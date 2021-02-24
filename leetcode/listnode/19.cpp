/*
  [1,2] 1  
     1
  [1,2] 2
     2  
 * */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
              if(head->next==NULL)return NULL;
              int len=1;
              for(ListNode *i=head;i->next!=NULL;i=i->next){
                  len++;
              }
              ListNode *temp=head;
              len=len-n;
              for(;len>1;len--){
                  temp=temp->next;
              }
              if(temp==head&&len==0){
                  head=head->next;
                  return head;
              }
              if(temp==NULL){
                  return head;
              }
              if(temp->next!=NULL)
              temp->next=temp->next->next;
              else temp->next=NULL;
              return head;
    }
};
