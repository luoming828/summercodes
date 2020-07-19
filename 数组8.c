/*输入非零整N，输出N行杨辉三角*/
#include<stdio.h>
#define N 10 //定义行数
int main()

{

	int i;
	int j;
	int a[N][N];

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
    for(i=0;i<N;i++)
	{
		for(j=0;j<2*(N-i);j++)
		{
			printf(" ");
		}

		for(j=0;j<=i;j++)
		{
			printf("%5d",a[i][j]);
		}

		printf("\n");

	}
	return 0;
}
