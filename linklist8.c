/*
����һ����������������е�����k���ڵ㡣Ϊ�˷��ϴ�����˵�ϰ�ߣ������1��ʼ�������������β�ڵ��ǵ�����1���ڵ㡣���磬һ��������6���ڵ㣬
��ͷ�ڵ㿪ʼ�����ǵ�ֵ������1��2��3��4��5��6���������ĵ�����3���ڵ���ֵΪ4�Ľڵ㡣

 */
/*����ָ��*/
struct ListNode* getKthFromEnd(struct ListNode* head, int k)
{
    struct ListNode*p=head,*q=head;
    while(k--) 
		q=q->next;
    while(p!=NULL)
	{
        p=p->next;
        q=q->next;
    }
    return p;
}

