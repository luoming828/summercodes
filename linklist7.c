/*�������������ͷָ���һ��Ҫɾ���Ľڵ��ֵ������һ������ɾ���ýڵ㡣

����ɾ����������ͷ�ڵ㡣*/
typedef struct ListNode ListNode;

struct ListNode* deleteNode(struct ListNode* head, int val){
    // ǰ��˫ָ�룬�����ֳ�������ɾ��
    ListNode *p = NULL;
    ListNode *q = head;
    while (q->next != NULL && q->val != val)
    {
        p=q;
        q=q->next;
    }
    if(p==NULL)
	{
        return q->next;
    }
    
    if(q->val==val)
    {
        p->next=q->next;
    }
    return head;
}

