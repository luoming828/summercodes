/*һ������Ϊn-1�ĵ������������е��������ֶ���Ψһ�ģ�����ÿ�����ֶ��ڷ�Χ0��n-1֮�ڡ��ڷ�Χ0��n-1�ڵ�n������������ֻ��һ�����ֲ��ڸ������У����ҳ�������֡�*/
#include<stdio.h>
#define N 10
int main()
{
	int i,flag=0;
	int a[N];
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		if((a[i+1]-a[i])==2)
		{
			flag=1;
			printf("%d\n",a[i]+1);
			break;
		}	
	}
	if(!flag)
		printf("false\n");
	return 0;
}



