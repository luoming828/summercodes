/*����������nums��,�Ƿ���������±�i��j��ʹ��nums[i]��nums[j]�Ĳ�ľ���ֵС�ڵ���t,������i��j�Ĳ�ľ���ֵҲС�ڵ���k��

��������򷵻� true�������ڷ��� false*/
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

