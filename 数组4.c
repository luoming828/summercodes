/*给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。*/
#include<stdio.h>
int main()
{
	int nums[10];
	int target,i,j;
	printf("输入目标值:");
	scanf("%d",&target);
	printf("\n");
	printf("输入一个十位数的数组：");
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

	