/*�ж�����ϵ�еĵ��Ƿ�����ͬһ��ֱ���ϣ����򷵻� true�������뷵�� false*/
/*���õ�1 2������ֱ�ߣ��ж��������Ƿ���ֱ����*/
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
