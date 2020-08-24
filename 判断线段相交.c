/*判断线段相交*/
/*#include<stdio.h>
#include<math.h>
void ifintersect(int a[],int b[]);
int main()
{
	int a[2][2],b[2][2];
	int i,j;
	printf("输入第一条线段的两点坐标：");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",a[i][j]);
	}
	printf("输入第二条线段的两点坐标：");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",b[i][j]);
	}
	ifintersect(a,b);
	return 0;

}

void ifintersect(int a[],int b[])
{
	int x1,y1,x2,y2,x3,y3,x4,y4;
	int temp1,temp2,temp3,temp4;
	int val1,val2,val3,val4,val5,val6,s1,s2,s3,s4,s5,s6;
	double l1,l2;
	x1=a[0][0];
	y1=a[0][1];
	x2=a[1][0];
	y2=a[1][1];
	x3=b[0][0];
	y3=b[0][1];
	x4=b[1][0];
	y4=b[1][1];
	if(x1>x2)//对坐标排序 横坐标大的大 横坐标相等 纵坐标大的大
	{
		temp1=x1;
		x1=x2;
		x2=temp1;
	}
	if(x1==x2)
		if(y1>y2)//小的当线段起点
		{
			temp2=y1;
			y1=y2;
			y2=temp2;
		}
	if(x3>x4)
	{
		temp3=x3;
		x3=a[0][1];
		x4=temp3;
	}
	if(x3==x4)
		if(y3>y4)
		{
			temp4=y3;
			y3=y4;
			y4=temp4;
		}
	val1=x2-x1;
	val2=y2-y1;
	val3=x3-x3;
	val4=y4-y3;
	s1=val1*val4-val2*val3;
	if(s1==0)
	{
		val5=x3-x2;
		val6=y3-y2;
		s2=val1*val6-val2*val5;
		if(s2!=0)
			printf("false\n");
		else
		{
			l1=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
			l2=sqrt(pow((y3-y1),2)+pow((x3-x1),2));
			if(l1<l2)
				printf("flase\n");
			else
				printf("true\n");
		}
	}
	else
	{
		s3=val1*(y3-y1)-val2*(x3-x1);
		s4=val1*(y4-y1)-val2*(x4-x1);
		s5=val3*(y3-y1)-val4*(x3-x1);
		s6=val3*(y2-y3)-val4*(x2-x3);
		if(s3*s4<0&&s5*s6<0)
			printf("true\n");
		else if(s3*s4==0||s5*s6==0)
			printf("true\n");
		else
			printf("false\n");
	}
}*/

/*
(A1-B1) × (B2-B1) * (B2-B1) × (A2-A1) >= 0
(B1-A1) × (A2-A1) * (A2-A1) × (B2-A1) >= 0
*/
 
#include<stdio.h>
#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b
typedef struct 
{
	double x,y;
}Point;
Point A1,A2,B1,B2;
Point  A1B1, B2B1, A2A1, B2A1;
double xx(Point &s,Point &t)//定义叉乘
{
    return (s.x*t.y-s.y*t.x);
}
int kua()                           //跨立实验
{
    A1B1.x=A1.x-B1.x;  A1B1.y=A1.y-B1.y;
    B2B1.x=B2.x-B1.x;  B2B1.y=B2.y-B1.y;
    A2A1.x=A2.x-A1.x;  A2A1.y=A2.y-A1.y;
    B2A1.x=B2.x-A1.x;  B2A1.y=B2.y-A1.y;
    if(xx(A1B1,B2B1)*xx(B2B1,A2A1)>=0)
    {
        A1B1.y=-A1B1.y;A1B1.x=-A1B1.x;
        if(xx(A1B1,A2A1)*xx(A2A1,B2A1)>=0)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    Point A1,A2,B1,B2;
    int flag=1,i,j,a,b,c,d,e,f;
    while(1)
    {
        scanf("%lf%lf%lf%lf",&A1.x,&A1.y,&A2.x,&A2.y);
        scanf("%lf%lf%lf%lf",&B1.x,&B1.y,&B2.x,&B2.y);
        if( min(A1.x,A2.x) <= max(B1.x,B2.x) &&
            min(B1.x,B2.x) <= max(A1.x,A2.x) &&
            min(A1.y,A2.y) <= max(B1.y,B2.y) &&
            min(B1.y,B2.y) <= max(A1.y,A2.y)   )   //快速排斥实验
        {
            if(kua())
                printf("线段相交\n");
            else
                printf("线段不相交\n");
        }
        else
            printf("线段不相交\n");
 
    }
    return 0;

			



