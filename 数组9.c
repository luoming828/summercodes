/*����һ���Ǹ����� k������ k �� 33������������ǵĵ� k �С�*/
#include<stdio.h>
#define N 50
int main()
{
	int k,i,j;
	int a[N][N];
	scanf("%d",&k);
	for(i=0;i<N;i++)//�Խ�����Ϊ1
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<N;i++)
	{

		for(j=1;j<i;j++)//�ӵ����еڶ�������ʼ������һ�е�һ�����ӵڶ�����
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<k;i++)
		printf("%d ",a[k-1][i]);
	printf("\n");
	return 0;
}