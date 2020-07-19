/*在整数数组nums中,是否存在两个下标i和j，使得nums[i]和nums[j]的差的绝对值小于等于t,且满足i和j的差的绝对值也小于等于k。

如果存在则返回 true，不存在返回 false*/
#include<stdio.h>
#include<math.h>
int main()
#define N 4
{
	int i,j,flag=0,k,t;
	int a[N];
	scanf("%d",&k);
	scanf("%d",&t);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		{
			if(fabs(a[i]-a[j])<=t&&fabs(i-j)<=k)
				flag=1;
		}
	if(flag)
		printf("ture\n");
	if(!flag)
		printf("false\n");
	return 0;
}

