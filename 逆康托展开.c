#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define Max 100
 
//��׳�
int factorial(int num)
{
	if(num<=1)
		return 1;
	else
		return (factorial(num-1)*num);
}
 
 
//��ӡs[]�е�num���Ԫ�أ��ҵ���num���Ԫ�أ������±����num��Ԫ������ǰ�ƶ�һ��
void get(int num,char s[],int length)
{
	int j=0;
	for(j=0;j<length;j++)
	{
		if(j==num)
			printf("%c\t",s[j]);
		if(j>num)
		{
			s[j-1] = s[j];
		}
	}
}
 
int main()
{
	char val;		//��ʱ�洢'A''B'��Ԫ��
	char s[Max];	
	int x;			
 
	int r[Max];		//�洢����2 0 0 0 
	int p[Max];		//�洢��3 1 0 0
 
	int i=0,j=0,k=0;
 
	printf("������s�ļ��ϣ�");
	while(scanf("%c",&val))
	{
		if(val == '\n')
			break;
		else
		{
			s[i] = val;
			i++;
		}	
	}
	
	printf("������X��ֵ��");
	scanf("%d",&x);
 
	//ѭ����p,r
	for(j=i-1;j>=0;j--)
	{
		p[k] = x/(factorial(j));
		r[k] = x%(factorial(j));
		x = r[k];
		k++;
	}
	//������
	for(j=0;j<i;j++)
	{
		get(p[j],s,i);
	}
	printf("\n");
 
	return 0;
}
