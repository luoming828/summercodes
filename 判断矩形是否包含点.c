/*�жϾ����Ƿ������*/
#include <stdio.h>
void main()
{
	int a,b,c,d,m,n,t;
	scanf("%d%d",&m,&n);
	scanf("%d%d",&a,&b);//��һ����ĺ�������
	scanf("%d%d",&c,&d);//�ڶ�����ĺ�������
	if(a>c) 
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>d) 
	{
		t=b;
		b=d;
		d=t;
	}
	if(m>=a&&m<=c&&n>=b&&n<=d)
	printf("YES\n");
	else
	printf("NO\n");
}