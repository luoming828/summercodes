/*
给定两个用链表表示的整数，每个节点包含一个数位。

这些数位是反向存放的，也就是个位排在链表首部。

编写函数对这两个整数求和，并用链表形式返回结果。

 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head, *temp, *t;
    int sum, car;
    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->next=NULL;
    head->val=0;
    temp=head;
    car=0;

    while (l1 || l2 || car) 
	{
        sum = 0;
        if(l1) 
		{
            sum += l1->val;
            l1 = l1->next;
        }

        if(l2) 
		{
            sum+=l2->val;
            l2=l2->next;
        }
        sum+=car;
        car=sum / 10;

        t=(struct ListNode *)malloc(sizeof(struct ListNode));
        t->val=sum%10;
        t->next=NULL;
        temp->next=t;
        temp=temp->next;
    }

    return head->next;
}
