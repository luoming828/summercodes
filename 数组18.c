/*判断坐标系中的点是否属于同一条直线上，是则返回 true，否则请返回 false*/
/*利用第1 2个点求直线，判断其他点是否在直线上*/
#include<stdio.h>
#define m 4
int main()
{
	int a[m][2];
	int i,j,k,b,flag=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	if((a[1][0]-a[0][0])!=0)
	{
		k=(a[1][1]-a[0][1])/(a[1][0]-a[0][0]);
		b=a[0][1]-k*a[0][0];
		for(i=2;i<m;i++)
		{
			for(j=0;j<2;j++)
				if(a[i][1]!=(k*a[i][0]+b))
				{
					flag=1;
					printf("false\n");
					break;
				}
			if(flag)
				break;
		}
		if(!flag)
			printf("true\n");
		}
	else
	{
		for(i=2;i<m;i++)
		{
			if(a[i][0]!=a[i+1][0])
			{
				flag=1;
				printf("false\n");
				break;
			}
		}
		if(!flag)
			printf("true\n");			
	}
	return 0;
}
