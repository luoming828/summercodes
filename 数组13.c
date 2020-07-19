/*给定一个大小为 n 的数组，找出其中所有出现超过n/3次的元素。*/
/*摩尔投票法*/
#include<stdio.h>
int main()
/*{
	int n,a[100],b[100];
	int i,t,j,k=0,sum=0,l=0,c;
	printf("n=");
	scanf("%d",&n);
	c=n/3;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		t=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[j]==t)
				sum++;
		}
		if(sum>c)
		{
			b[k]=t;
			k++;
		}

	}
	/*for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(b[i]!=b[j])
			{
				b[l]=b[i];
				l++;
			}
		}
		
	}
	for(i=0;i<k;i++)
		printf("%d ",b[i]);
	return 0;
}*/
{	
	int a[100],b[100];
	int n;
	int i,k=0;
	int count1=0;
	int count2=0;
	int current1=0;
	int current2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if (a[i]==current1)
		{
			count1++;
		}
		else if (a[i]==current2)
		{
			count2++;
		}
		else if (count1 == 0) 
		{
			count1=1;
			current1=a[i];
		}
		else if (count2 == 0) 
		{
			count2=1;
			current2=a[i];
		}
		else 
		{
			count1--;
			count2--;
		}
	}
	count1=count2=0;
	for (i=0;i<n;i++)
	{
		if (a[i] == current1) 
			count1++;
		else if (a[i] == current2) 
			count2++;
	}
	if (count1 > n/ 3)
		b[k++] = current1;
	if (count2 > n/ 3) 
		b[k++] = current2;
	for(i=0;i<k;i++)
		printf("%d ",b[i]);
	printf("\n");
	return 0;
}

	



				


