/*

删除链表中等于给定值 val 的所有节点。

*/
struct ListNode* removeElements(struct ListNode* head, int val)
{
	 struct ListNode* tmp=head;
	 while(head!=0&&head->val==val) 
		 head=head->next;
	 while(tmp!=0)
		 if(tmp->next!=0&&tmp->next->val==val) 
			tmp->next=tmp->next->next;
		 else 
			tmp=tmp->next;
    return head;
}
