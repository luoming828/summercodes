/*给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。*/
struct ListNode* rotateRight(struct ListNode* head, int k) 
{
	int n = 1;
	if (k <= 0 || head == NULL) 
	  return head;
  
	struct ListNode* p = head;
	while(p->next!=NULL) // 求长度
	{  
		p=p->next;
		n++;
	}
	if(n==k||n==1)  // 求位置
		return head;
	else if(k>n)
		k=n-(k%n)-1;
	else
		k=n-k-1;
	p->next=head;  // 链表成环
	p=head;        // 重新搜索
	while(k>0)
	{
		p=p->next;
		k--;
	}
	head=p->next;
	p->next=NULL;
	return head;
}
