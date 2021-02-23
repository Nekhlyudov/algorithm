class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
             ListNode rel(0);
             bool flag=false;
             ListNode *temp=&rel;
             for(ListNode *rs1=l1, *rs2=l2;rs1!=NULL||rs2!=NULL;){
                 int val1=0;
                 int val2=0;
                 if(rs1!=NULL)val1=rs1->val;
                 if(rs2!=NULL)val2=rs2->val;
                 int val=(val1+val2)+(flag?1:0);
                 if(flag)flag=false;
                 if(val>=10){
                     temp->next=new ListNode(val-10);
                     flag=true;
                 }
                 else temp->next=new ListNode(val);
                 temp=temp->next;
                 if(rs1!=NULL&&rs1->next!=NULL)rs1=rs1->next;
                 else rs1=NULL;
                  if(rs2!=NULL&&rs2->next!=NULL)rs2=rs2->next;
                 else rs2=NULL;
             }
             if(flag){
                 temp->next=new ListNode(1);
             }
             return rel.next;
    }
};
