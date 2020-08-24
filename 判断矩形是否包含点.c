/*判断矩形是否包含点*/
#include <stdio.h>
void main()
{
	int a,b,c,d,m,n,t;
	scanf("%d%d",&m,&n);
	scanf("%d%d",&a,&b);//第一个点的横纵坐标
	scanf("%d%d",&c,&d);//第二个点的横纵坐标
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