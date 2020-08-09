/*给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。*/
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
