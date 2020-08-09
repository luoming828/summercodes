/*
编写程序以 x 为基准分割链表，使得所有小于 x 的节点排在大于或等于 x 的节点之前。如果链表中包含 x，x 只需出现在小于 x 的元素之后(如下所示)。分割元素 x 只需处于“右半部分”即可，其不需要被置于左右两部分之间。

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
    //自建头节点
    struct ListNode *new_head=(struct ListNode *)malloc(sizeof(struct ListNode));
    new_head->next=head;

    struct ListNode *pre=new_head;
    while(head&&head->val<x)//单独分析头节点
    {
        pre=head;
        head=head->next;
    }
    while(head)
    {
        if(head->val<x)//目标
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
