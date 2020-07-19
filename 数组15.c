/*给你一个以行程长度编码压缩的整数列表nums。

考虑每对相邻的两个元素 [freq, val] = [nums[2*i], nums[2*i+1]]（其中i >= 0），每一对都表示解压后子列表中有 freq个值为val的元素，你需要从左到右连接所有子列表以生成解压后的列表。

请你返回解压后的列表。*/
#include<stdio.h>
#define N 4//N为偶数

int main()
{
	int i,j,k=0;
	int a[N],b[N/2],c[5000];
	int sum=0;
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i=i+2)
		sum=sum+a[i];
	for(i=0;i<sum;i=i+2)
		for(j=0;j<a[i];j++)
		{
			c[k]=a[i+1];
			k++;
		}
	for(i=0;i<sum;i++)
		printf("%d ",c[i]);
	printf("\n");
	return 0;
}




		


	
	
	

