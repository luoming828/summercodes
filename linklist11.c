/*给定两个（单向）链表，判定它们是否相交并返回交点。请注意相交的定义基于节点的引用，而不是基于节点的值。
换句话说，如果一个链表的第k个节点与另一个链表的第j个节点是同一节点（引用完全相同），则这两个链表相交。
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) 
{
   struct ListNode *p=headA;
   struct ListNode *q=headB;
   while(p!=q)
   {
       if(p==NULL)
            p=headB;
       else
            p=p->next;
       if(q==NULL)
            q=headA;
       else 
            q=q->next;
   }
   return q;
}

