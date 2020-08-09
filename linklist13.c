/*
给定链表头结点 head，该链表上的每个结点都有一个 唯一的整型值 。

同时给定列表 G，该列表是上述链表中整型值的一个子集。

返回列表 G 中组件的个数，这里对组件的定义为：链表中一段最长连续结点的值（该值必须在列表 G 中）构成的集合*/
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

