/*����һ��������ת����������ÿ���ڵ������ƶ� k ��λ�ã����� k �ǷǸ�����*/
struct ListNode* rotateRight(struct ListNode* head, int k) 
{
	int n = 1;
	if (k <= 0 || head == NULL) 
	  return head;
  
	struct ListNode* p = head;
	while(p->next!=NULL) // �󳤶�
	{  
		p=p->next;
		n++;
	}
	if(n==k||n==1)  // ��λ��
		return head;
	else if(k>n)
		k=n-(k%n)-1;
	else
		k=n-k-1;
	p->next=head;  // ����ɻ�
	p=head;        // ��������
	while(k>0)
	{
		p=p->next;
		k--;
	}
	head=p->next;
	p->next=NULL;
	return head;
}
