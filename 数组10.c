/*给定一个整数数组，判断是否存在重复元素。

如果任意一值在数组中出现至少两次，函数返回 true 。如果数组中每个元素都不相同，则返回 false*/
int main()
#define N 10
{
	int i,j,flag=0;
	int a[N];
	for(i=0;i<N-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j])
				flag=1;
		}
	if(flag)
		printf("ture\n");
	if(!flag)
		printf("false\n");
	return 0;
}

