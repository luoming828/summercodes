/*
����һ������������һ�������ͷ�ڵ㣬��ת�����������ת�������ͷ�ڵ㡣
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
