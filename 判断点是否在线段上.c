/*�жϵ��Ƿ����߶���*/
#include<stdio.h>

int main()
{
	int val1,val2,k,b;
	printf("����ֱ�ߵ�б�ʺͽؾࣺ");
	scanf("%d%d",&k,&b);
	printf("��������x��");
	scanf("%d",&val1);
	printf("��������y��");
	scanf("%d",&val2);
	if(val2==k*val1+b)
		printf("ture\n");
	else
		printf("false\n");
	return 0;
}




