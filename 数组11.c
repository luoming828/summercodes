/*����һ�����������һ������k���ж��������Ƿ����������ͬ������i��j��ʹ��nums[i]=nums[j],����i��j�Ĳ�ľ���ֵ����Ϊk*/
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

