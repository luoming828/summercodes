/*һ�����������������������֮�⣬���������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�*/
#include<stdio.h>
int main()
{
	int a[6];
	int i,j,k,flag;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(j=0;j<6;j++)
	{
		flag=0;
		for(k=0;k<j;k++)
		{
			if(a[j]==a[k])
				flag=1;
		}
		for(k=j+1;k<6;k++)
		{
			if(a[j]==a[k])
				flag=1;		
		}
		if(flag==0)
			printf("%d ",a[j]);
	}
	return 0;
}

