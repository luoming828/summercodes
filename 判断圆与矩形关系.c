/*�ж�Բ����ι�ϵ*/
#include <stdio.h>
#include <string.h>
#include <math.h>
double l(double n1, double m1, double n2, double m2);
double max(double x, double y);
double min(double x, double y);
int main()
{	
	double a,b,xa,ya,xb,yb,r;
    
    scanf("%lf%lf%lf%lf%lf%lf%lf", &a, &b, &r, &xa, &ya, &xb, &yb);
    if (
			l(xa, ya, a, b)<r&&
			l(xa, yb, a, b)<r&&
			l(xb, ya, a, b)<r&&
			l(xb, yb, a, b)<r //������Բ����
           )
	{
		printf("����\n");
       
	}
    else if (
				
                l(xa, ya, a, b)>r&&
                l(xa, yb, a, b)>r&&
                l(xb, ya, a, b)>r&&
                l(xb, yb, a, b)>r&&
                l(xa, ya, xb, ya)>2*r&&
                l(xa, ya, xa, yb)>2*r //Բ�ھ�������
            )
    {
        printf("����\n");   
    }
    else if (
                l(xa, ya, a, b)<=r||
                l(xa, yb, a, b)<=r||
                l(xb, ya, a, b)<=r||
                l(xb, yb, a, b)<=r    //������Բ��
             )
    {
		printf("����\n");
            
    }
    else if(
				(l(xa, b, a, b)<=r&&b<max(ya,yb)&&b>min(ya, yb))||
				(l(xb, b, a, b)<=r&&b<max(ya,yb)&&b>min(ya, yb))||
				(l(a, ya, a, b)<=r&&a<max(xa,xb)&&a>min(xa, xb))||
				(l(a, yb, a, b)<=r&&a<max(xa,xb)&&a>min(xa, xb))  //���㲻��Բ�ڵ��Ǳߺ�Բ�ཻ
               )
        {
            printf("�ཻ\n");         
		}
    else
		printf("����\n");
    
    return 0;
}
double l(double n1, double m1, double n2, double m2)
{
    double s;
    s = (n1-n2)*(n1-n2)+(m1-m2)*(m1-m2);
    s= sqrt(s);
    return s;
}

double max(double x, double y)
{
    if (x > y)
        return x;
    else
        return y;
}

double min(double x, double y)
{
    if (x < y)
        return x;
    else
        return y;
}

 
