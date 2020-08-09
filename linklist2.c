/*����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int num;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head)
{

	if(head==NULL)
		return head;

	struct ListNode *lp;
	struct ListNode *p = head;
	lp=p;
	while(p->next!=NULL)
	{
		if(p->num==p->next->num)
		{
			p->next=p->next->next;
		}
		else
		{
			p=p->next;
		}
	}
	return lp;
}
