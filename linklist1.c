/*
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
*/
/*
 * struct ListNode {
 *     int num;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;
    struct ListNode *head = NULL;
    if(p1->num > p2->num)//先确定头结点
    {
        head=p2;
        p2=p2->next;
    }    
    else
    {
        head=p1;
        p1=p1->next;
    } 
    struct ListNode *current=head;//current始终指向head链表的最后一个节点
    while(1)
    {
        if(p1!=NULL&&p2!=NULL)
        {
            if(p1->num>p2->num)
            {
                current->next=p2;
                current=p2;
                p2=p2->next;
            }
            else
            {
                current->next=p1;
                current=p1;
                p1=p1->next;
            }
        }
        if(p1==NULL)//p1链表为空，就把剩下的p2链表直接加入head末尾
        {
            current->next=p2;
            break;
        }
        if(p2==NULL)//p2链表为空，就把剩下的p1链表直接加入head末尾
        {
            current->next=p1;
            break;
        }
    }
    return head;   
}
