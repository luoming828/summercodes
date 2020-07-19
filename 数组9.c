/*给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。*/
#include<stdio.h>
#define N 50
int main()
{
	int k,i,j;
	int a[N][N];
	scanf("%d",&k);
	for(i=0;i<N;i++)//对角线置为1
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<N;i++)
	{

		for(j=1;j<i;j++)//从第三行第二个数开始等于上一行第一个数加第二个数
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<k;i++)
		printf("%d ",a[k-1][i]);
	printf("\n");
	return 0;
}