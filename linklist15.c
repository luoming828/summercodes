/*对链表进行排序。*/
struct ListNode* sortList(struct ListNode* head) 
{
	if (!head || !head->next)
	return head;
	struct ListNode* p = (struct ListNode* )malloc(sizeof(struct ListNode));
	struct ListNode* t = NULL;
	struct ListNode* s = NULL;
	struct ListNode* z = NULL;
	p->next = head;
	struct ListNode* q = head;
	head = head->next;
	p->next->next = NULL;
	int i = p->next->val;
	while (head)
	{
		z = p;
		t = p->next;
		if (head->val < i)	
			i = head->val
			q = head;
		while (t)
		{
			if (head->val < t->val)
			{
				s = head->next;
				head->next = t;
				z->next = head;
				head = s;
				p->next = q;
				break;
			}
			else if (t->next == NULL)
			{
			s = head->next;
			t->next = head;
			head = s;
			t->next->next = NULL;
			p->next = q;
			break;
			}
		t = t->next;
		z = z->next;
		}
	}
	return p->next;
}

