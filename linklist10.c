/*
����һ����������ɾ�����к����ظ����ֵĽڵ㣬ֻ����ԭʼ������ û���ظ����� �����֡�
*/
struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *p,*L,*q;

    if(!head||!(head->next))  return head;
    L=(struct ListNode*)malloc(sizeof(struct ListNode));
    L->next=NULL;//�½�һ������ͷ���ָ��ԭ����head,
    p=L;
    q=head->next;

	while(q)
	{
		if(q->val==head->val)//�ж��Ƿ����
		{
        
			while(q->val==head->val)
			{
				q=q->next;
				if(!q)//�ж��Ƿ������ĩβ
				break;
			}
			if(q!=NULL)//��Ϊ��β����q��λ�ø���head��q��������
		{
			head=q;
			q=q->next;
		}
		else//Ϊ��β��˵��Ԫ��ȫ�����ظ��Ľ�㣬����ΪNULL������ѭ��
		{
			head=q=NULL;
		}    
    }
		else//�ҵ���Ϊ�ظ�Ԫ�صĽ��
		{
			p->next=head;//ָ��������
			p=p->next;
			head=head->next;
			if(!head)
			break;
			q=q->next;

		}

}
