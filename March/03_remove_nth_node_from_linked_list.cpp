//  ListNode* removeNthFromEnd(ListNode* head, int n) {
//         // 1 pass solution

//         ListNode * temp=head;
//         // move tmp to nth node
//         for(int i=0;i<n;i++)
//             temp=temp->next;
        
//         if(temp==NULL)
//             return head->next;

//         ListNode * pre=head;

//         while(temp!=NULL && temp->next!=NULL){
//             temp=temp->next;
//             pre=pre->next;
//         }

//         pre->next=pre->next->next;
    
//     return head;

//     }