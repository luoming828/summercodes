/*
给定两个（单向）链表，判定它们是否相交并返回交点。请注意相交的定义基于节点的引用，而不是基于节点的值。换句话说，如果一个链表的第k个节点与另一个链表的第j个节点是同一节点（引用完全相同），则这两个链表相交。

*/
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
 {
    struct ListNode *p1=headA,*p2=headB;
    while(p1!=0&&p2!=0)
	{
        p1=p1->next;
        p2=p2->next;
    }
    //以下if语句用于保证headA指向较长的链表头部。
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
