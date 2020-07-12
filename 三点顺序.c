/*判断三点顺序(顺时针或逆时针者)*/
#include<stdio.h>
int main()
{
	double x1,x2,x3,y1,y2,y3,s;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	s=(x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
	if(s<0)
		printf("顺时针\n");
	if(s>0)
		printf("逆时针\n");
	if(s=0)
		printf("共线\n");
	return 0;
}