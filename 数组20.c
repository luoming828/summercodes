/*一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。*/
#include<stdio.h>
#define N 10
int main()
{
	int i,flag=0;
	int a[N];
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		if((a[i+1]-a[i])==2)
		{
			flag=1;
			printf("%d\n",a[i]+1);
			break;
		}	
	}
	if(!flag)
		printf("false\n");
	return 0;
}



