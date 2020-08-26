/*用递归实现函数reverse(int n)实现将整数n逆序输出*/
void reverse(int num)
{
	if(num<=9)
		printf("%d",num);
	else
	{
		printf("%d",num%10);
		reverse(num/10);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	reverse(n);
	return 0;
}

