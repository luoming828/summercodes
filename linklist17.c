/*���ж�һ�������Ƿ�Ϊ��������*/
bool isPalindrome(struct ListNode* head)
{
    if(head==0||head->next==0) 
		return head;
    struct ListNode* slow_p=head,*p=head;
	struct ListNode* head_=slow_p->next;
    
    //�ҵ�������м�ڵ㡣
    while(p->next!=0&&p->next->next!=0)
	{
        slow_p=slow_p->next;
        p=p->next->next;
    }
    
    //������ֳ����롣
   
    slow_p->next=0;
    
    //���ڶ�������ת��
    p=head_;
    while(p->next!=0){
        slow_p=head_;
        head_=p->next;
        p->next=p->next->next;
        head_->next=slow_p;
    }
    
    //��˳��Ƚ�������valֵ��
    while(head_!=0)
	{
        if(head->val!=head_->val) return 0;
        head=head->next;
        head_=head_->next;
    }
    return 1;
}

