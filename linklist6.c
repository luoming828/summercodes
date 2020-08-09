/*
定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。
*/
struct ListNode* reverseList(struct ListNode* head)
{
    if (head==NULL||head->next==NULL) 
		return head;
    struct ListNode *temp=NULL, *q=head, *r=head->next;
    q->next=p;
    while(r) 
	{
        temp=q;
        q=r;
        r=r->next;
        q->next=temp;
    }
    return q;
}
