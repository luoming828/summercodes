/*
��д������ x Ϊ��׼�ָ�����ʹ������С�� x �Ľڵ����ڴ��ڻ���� x �Ľڵ�֮ǰ����������а��� x��x ֻ�������С�� x ��Ԫ��֮��(������ʾ)���ָ�Ԫ�� x ֻ�账�ڡ��Ұ벿�֡����ɣ��䲻��Ҫ����������������֮�䡣

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x){
    if(!head||!head->next)
    return head;
    //�Խ�ͷ�ڵ�
    struct ListNode *new_head=(struct ListNode *)malloc(sizeof(struct ListNode));
    new_head->next=head;

    struct ListNode *pre=new_head;
    while(head&&head->val<x)//��������ͷ�ڵ�
    {
        pre=head;
        head=head->next;
    }
    while(head)
    {
        if(head->val<x)//Ŀ��
        {
            pre->next=head->next;
            head->next=new_head->next;
            new_head->next=head;
            head=pre->next;
        }
        else
        {
            pre=head;
            head=head->next;
        }
    }
    return new_head->next;
}
