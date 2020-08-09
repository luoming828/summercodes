/*输入两个链表，找出它们的第一个公共节点。*/
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 
{
    struct ListNode *p1=headA,*p2=headB;
    while(p1!=0&&p2!=0)
	{
        p1=p1->next;
        p2=p2->next;
    }
    if(p1==0)
	{
        p1=headA;
        headA=headB;
        headB=p1;
        p1=p2;
    }
    while(p1!=0)
	{
        headA=headA->next;
        p1=p1->next;
    }
    while(headA!=0)
	{
        if(headA==headB) 
			return headA;
        headA=headA->next;
        headB=headB->next;
    }
    return 0;
}

