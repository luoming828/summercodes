/*����һ������ͷ��� head �ķǿյ���������������м��㡣

����������м��㣬�򷵻صڶ����м��㡣

 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* p =head,*q= head;
    while(q->next)
	{
        if(q->next->next == NULL)
           return p->next; 
        q = q->next->next;
        p = p->next;
    }
    return p;
}

