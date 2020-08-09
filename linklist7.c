/*给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。

返回删除后的链表的头节点。*/
typedef struct ListNode ListNode;

struct ListNode* deleteNode(struct ListNode* head, int val){
    // 前后双指针，保留现场，进行删除
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

