/*����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����*/
#include<stdio.h>
int main()
{
	int a[6],b[6];
	int i,j,k,*p=NULL;
	printf("������һ����λ���飺");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	
	printf("������Ҫ�ƶ���λ����");	
		scanf("%d",&k);
	for(i=0;i<6;i++)
	{
		if(i-k<0)
			a[i]=b[i-k+6];//a[i]=a[i+k-n];
		else
			a[i]=b[i-k];
	}
	for(j=0;j<6;j++)
		printf("%d ",a[j]);


	return 0;
}

	

