/*反转一个单链表。*/
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *res = NULL, *cur=head;
    while(cur)
	{            
        head=head->next; 
        cur->next=res;    
        res=cur;          
        cur=head;         
    }
    return res
}
