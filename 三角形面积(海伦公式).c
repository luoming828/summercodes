/*三角形面积(海伦公式)*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,s;
	printf("请输入三角行的三条边:");
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
		printf("\n这三边不能组成三角形\n");
	}
	else
		printf("\n输入错误！");
	return 0;
}
	

