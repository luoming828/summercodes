/*����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ*/
#include<stdio.h>
int main()
{
	int nums[10];
	int target,i,j;
	printf("����Ŀ��ֵ:");
	scanf("%d",&target);
	printf("\n");
	printf("����һ��ʮλ�������飺");
	for(i=0;i<10;i++)
		scanf("%d",&nums[i]);
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(nums[i]+nums[j]==target)
				printf("%d %d\n",i,j);
		}
	}
	return 0;
}

	