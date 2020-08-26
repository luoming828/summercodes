/*递归实现x的n次方*/
double  a(double  x, double n)
{
	double s;
	if(n==1)
		s=x;
	else
	{
		s=a(x,n-1)*x;
	}
	return s;
}
int main()
{
	double x,n;
	scanf("%lf",&x);
	scanf("%lf",&n);

	printf("%.0lf",a(x,n));
	return 0;
}