/*���������(���׹�ʽ)*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,s;
	printf("�����������е�������:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>0&&b>0&&c>0)
	{
		if((a+b>c)&&(a+c>b)&&(b+c>a))
		{
			p=(a+b+c)/2;
			s=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("%.1lf\n",s);
		}
		else
		printf("\n�����߲������������\n");
	}
	else
		printf("\n�������");
	return 0;
}
	

