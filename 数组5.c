/*����һ�������������е��������� nums����һ��Ŀ��ֵ target���ҳ�����Ŀ��ֵ�������еĿ�ʼλ�úͽ���λ��*/
#include<stdio.h>
int main()
{
	int nums[10],a[10];
	int target,i,k=0;
	printf("����һ�����飺");
	for(i=0;i<10;i++)
		scanf("%d",&nums[i]);
	printf("����Ŀ��ֵ��");
	scanf("%d",&target);
	for(i=0;i<10;i++)
	{
		if(nums[i]==target)
		{
			a[k]=i;
			k++;
		}
	}
	printf("%d %d",a[0],a[k-1]);
	return 0;
}

