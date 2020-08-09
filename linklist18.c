/*输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

 */
int* reversePrint(struct ListNode* head, int* returnSize)
{
	int *res=malloc(length*sizeof(int));
	struct ListNode*tmp,*header=head;
    int length=1,i;
    if(head==0)
	{
        *returnSize=0;
        return 0;
    }
    
    while(head->next!=0)
	{
        length++;
        tmp=head->next;
        head->next=tmp->next;
        tmp->next=header;
        header=tmp;
    }
    *returnSize=length;
    
    for(i=0;i<length;i++)
	{
        res[i]=header->val;
        header=header->next;
    }
    return res;
}
