/*筛法求素数*/
#include <stdio.h>
int main()
{
	int prime[1002],i,j;
	int n=0;
	for(i=2;i<1000;i++)
		prime[i]=i;//将数组填满1~1000的数字,由于1不是素数，因此跳过1，从2开始填
	for(i=2;i<1000;i++)
	{
		if(prime[i]!=0)
			for(j=2;i*j<1000;j++)
			prime[i*j]=0;//挖掉
	}
	for(i=2;i<1000;i++)
	{
		if(prime[i]!=0)
		{
		printf("%d ",prime[i]);//最后非0的数字输出
		
		}
	}
	printf("\n");
	return 0;
}