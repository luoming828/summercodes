/*ɸ��������*/
#include <stdio.h>
int main()
{
	int prime[1002],i,j;
	int n=0;
	for(i=2;i<1000;i++)
		prime[i]=i;//����������1~1000������,����1�����������������1����2��ʼ��
	for(i=2;i<1000;i++)
	{
		if(prime[i]!=0)
			for(j=2;i*j<1000;j++)
			prime[i*j]=0;//�ڵ�
	}
	for(i=2;i<1000;i++)
	{
		if(prime[i]!=0)
		{
		printf("%d ",prime[i]);//����0���������
		
		}
	}
	printf("\n");
	return 0;
}