/*
��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ� 
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
    if(p1->num > p2->num)//��ȷ��ͷ���
    {
        head=p2;
        p2=p2->next;
    }    
    else
    {
        head=p1;
        p1=p1->next;
    } 
    struct ListNode *current=head;//currentʼ��ָ��head��������һ���ڵ�
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
        if(p1==NULL)//p1����Ϊ�գ��Ͱ�ʣ�µ�p2����ֱ�Ӽ���headĩβ
        {
            current->next=p2;
            break;
        }
        if(p2==NULL)//p2����Ϊ�գ��Ͱ�ʣ�µ�p1����ֱ�Ӽ���headĩβ
        {
            current->next=p1;
            break;
        }
    }
    return head;   
}
