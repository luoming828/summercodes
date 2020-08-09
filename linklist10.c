/*
给定一个排序链表，删除所有含有重复数字的节点，只保留原始链表中 没有重复出现 的数字。
*/
struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *p,*L,*q;

    if(!head||!(head->next))  return head;
    L=(struct ListNode*)malloc(sizeof(struct ListNode));
    L->next=NULL;//新建一个链表头结点指向原链表head,
    p=L;
    q=head->next;

	while(q)
	{
		if(q->val==head->val)//判断是否相等
		{
        
			while(q->val==head->val)
			{
				q=q->next;
				if(!q)//判断是否到链表的末尾
				break;
			}
			if(q!=NULL)//不为表尾，将q的位置赋给head，q继续遍历
		{
			head=q;
			q=q->next;
		}
		else//为表尾，说明元素全都是重复的结点，令其为NULL，跳出循环
		{
			head=q=NULL;
		}    
    }
		else//找到不为重复元素的结点
		{
			p->next=head;//指向这个结点
			p=p->next;
			head=head->next;
			if(!head)
			break;
			q=q->next;

		}

}
