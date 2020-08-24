/*判断点到线段的最近点*/
#include<stdio.h>
#include<math.h>
typedef struct 
{
	double x,y;
}Point;
int main()
{
	double k,b1,b2,x1,y1,l1,l2;
	Point A,B,C;
	printf("输入线段其中一点坐标：");
	scanf("%lf%lf",&A.x,&A.y);
	printf("输入线段另一点坐标：");
	scanf("%lf%lf",&B.x,&B.y);
	printf("输入一点坐标：");
	scanf("%lf%lf",&C.x,&C.y);
	k=(B.y-A.y)/(B.x-A.x);
	b1=B.y-k*B.x;
	b2=C.y+C.x/k;
	x1=(b2-b1)/(k+1/k);
	y1=k*x1+b1;
	if(((x1>A.x)!=(x1>B.x))&&((y1>A.y)!=(y1>B.y)))
		printf("x=%.1lf,y=%.1lf\n",x1,y1);
	else
	{
		l1=sqrt(pow((A.x-C.x),2)+pow((A.y-C.y),2));
		l2=sqrt(pow((B.x-C.x),2)+pow((B.y-C.y),2));
		if(l1>l2)
			printf("x=%.1lf,y=%.1lf\n",B.x,B.y);
		else
			printf("x=%.1lf,y=%.1lf\n",A.x,A.y);
	}
	return 0;
}




