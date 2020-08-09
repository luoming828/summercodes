/*给定一个带有头结点 head 的非空单链表，返回链表的中间结点。

如果有两个中间结点，则返回第二个中间结点。

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

