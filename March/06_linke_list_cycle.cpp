//  bool hasCycle(ListNode *head) {
//         ListNode *slow=head,*fast=head;
//         if(head==NULL)
//              return false;
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast)
//                 return true;

//         }
//         return false;

        
//     }