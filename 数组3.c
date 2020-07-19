/*给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。*/
#include<stdio.h>
int main()
{
	int a[6],b[6];
	int i,j,k,*p=NULL;
	printf("请输入一个六位数组：");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	
	printf("请输入要移动的位数：");	
		scanf("%d",&k);
	for(i=0;i<6;i++)
	{
		if(i-k<0)
			a[i]=b[i-k+6];//a[i]=a[i+k-n];
		else
			a[i]=b[i-k];
	}
	for(j=0;j<6;j++)
		printf("%d ",a[j]);


	return 0;
}

	

