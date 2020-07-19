/*给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。*/
#include<stdio.h>
int main()
{
	int i,k=0,val;
	int nums[10];
	printf("输入一个10个数字的数组：");
	for(i=0;i<10;i++)
		scanf("%d",&nums[i]);
	printf("输入要删除的数字：");
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

