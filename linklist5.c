/*
��д���룬�Ƴ�δ���������е��ظ��ڵ㡣�����ʼ���ֵĽڵ㡣

*/

struct ListNode* removeDuplicateNodes(struct ListNode* head)
{
	struct ListNode *pmove=head,*q,*pre,*p ;//pworkΪ�������
	
	while(pmove!= NULL)
	{
	
		q=pmove;//q��¼��ǰpmove����ֵ
		pre=pmove;//��ɾ������ǰ�����
		p=pre->next;//��ɾ�����
			
		while(p!=NULL)
		{
			
			if(q->num==p->num)//�ҵ��ظ����
			{
				pre->next=p->next;//ɾ�����
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
