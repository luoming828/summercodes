
#include<stdio.h>
#define Max 100
 
//��׳�
int factorial(int num)
{
	if(num<=1)
		return 1;
	else
		return (factorial(num-1)*num);
}
 
int main()
{
	int num[Max];
	char s[Max];
	int i=0,j=0,k=0,count=0;
	char val;
	int sum=0;
 
	//��ȡ����
	while(scanf("%c",&val))
	{
		if(val=='\n')
			break;
		else
		{
			s[count] = val;
			count++;
		}
	}

 
	//�ֱ����Ԫ�ص��������һ��Ԫ����Ҫ��ʣ�µ�n-1���Ƚ�
	//�ڶ���Ԫ����Ҫ��ʣ�µ�n-2���Ƚϣ�������Ԫ����Ҫ��ʣ�µ�n-3��Ԫ�ؽ��бȽϵȵ�
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(s[i]>s[j])
				k++;
		}
		num[i]=k;
		k=0;
	}
	for(j=count-1;j>=0;j--)
	{
		sum += factorial(j) * num[k];
		k++;
	}
	printf("�ǵ�%d������\n",sum+1);
 
	return 0;
}
