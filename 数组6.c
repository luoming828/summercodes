/*����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�*/
#include<stdio.h>
int main()
{
	int i,k=0,val;
	int nums[10];
	printf("����һ��10�����ֵ����飺");
	for(i=0;i<10;i++)
		scanf("%d",&nums[i]);
	printf("����Ҫɾ�������֣�");
	scanf("%d",&val);
	/*removeElement(nums,i,val);*/
	for(i=0;i<10;i++)
	{
		if(nums[i]!=val)
		{
			nums[k]=nums[i];
			k++;
		}
	}
	printf("%d\n",k);
	return 0;
}

