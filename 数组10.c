/*����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�

�������һֵ�������г����������Σ��������� true �����������ÿ��Ԫ�ض�����ͬ���򷵻� false*/
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

