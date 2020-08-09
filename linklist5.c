/*
编写代码，移除未排序链表中的重复节点。保留最开始出现的节点。

*/

struct ListNode* removeDuplicateNodes(struct ListNode* head)
{
	struct ListNode *pmove=head,*q,*pre,*p ;//pwork为遍历结点
	
	while(pmove!= NULL)
	{
	
		q=pmove;//q记录当前pmove结点的值
		pre=pmove;//待删除结点的前驱结点
		p=pre->next;//待删除结点
			
		while(p!=NULL)
		{
			
			if(q->num==p->num)//找到重复结点
			{
				pre->next=p->next;//删除结点
				p=pre->next;/
			}
			else
			{
				pre=pre->next;
				p=p->next;
			}
	
		}
		
		pmove=pmove->next;
	}

	return head;
}
