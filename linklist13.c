/*
��������ͷ��� head���������ϵ�ÿ����㶼��һ�� Ψһ������ֵ ��

ͬʱ�����б� G�����б�����������������ֵ��һ���Ӽ���

�����б� G ������ĸ��������������Ķ���Ϊ��������һ�����������ֵ����ֵ�������б� G �У����ɵļ���*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int numComponents(struct ListNode* head, int* G, int GSize)
{
	int i,count=0,flag=0;
	struct ListNode *p=head,*q;
	while(p)
	{
		q=p;
		i=0;
		while(i<GSize&&p->val!=G[i]) i++;
		if(flag==1&&i==GSize)  
		{
			count++;
			p=p->next;
			flag=0;
		}
    else if(flag==0&&i==GSize)  
    {
        p=p->next;
    }
    else
    {
        flag=1;
        p=p->next;
    }
	}
	i=0;
	while(i<GSize&&q->val!=G[i]) 
		i++;
	if(i<GSize)  
	{
		count++;
	}
	return count;
}

