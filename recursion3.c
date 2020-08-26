/*”√µ›πÈ µœ÷n!*/
#include<stdio.h>
int factorial(int n);
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",factorial(a));
	return 0;
}
int factorial(int n)
{
	int s;
	if(n==1)
		s=1;
	else
		s=factorial(n-1)*n;
	return s;
}



