/*给定一个整数数组和一个整数k，判断数组中是否存在两个不同的索引i和j，使得nums[i]=nums[j],并且i和j的差的绝对值至多为k*/
#include<stdio.h>
#include<math.h>
int main()
#define N 4
{
	int i,j,flag=0,k;
	int a[N];
	scanf("%d",&k);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j]&&fabs(i-j)<=k)
				flag=1;
		}
	if(flag)
		printf("ture\n");
	if(!flag)
		printf("false\n");
	return 0;
}

