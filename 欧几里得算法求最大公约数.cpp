/*欧几里得算法求最小公约数（辗转相除法）*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter two digits:");
	scanf("%d%d",&a,&b);
	d=a*b;
	c=a%b;
	while(c)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("Least common divisor is :%d\n",b);
	printf("Greatest common divisor is:%d\n",d/b);
	return 0;
}
	

