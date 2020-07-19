/*给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置*/
#include<stdio.h>
int main()
{
	int nums[10],a[10];
	int target,i,k=0;
	printf("输入一个数组：");
	for(i=0;i<10;i++)
		scanf("%d",&nums[i]);
	printf("输入目标值：");
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

