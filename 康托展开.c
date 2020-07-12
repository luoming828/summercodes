
#include<stdio.h>
#define Max 100
 
//求阶乘
int factorial(int num)
{
	if(num<=1)
		return 1;
	else
		return (factorial(num-1)*num);
}
 
int main()
{
	int num[Max];
	char s[Max];
	int i=0,j=0,k=0,count=0;
	char val;
	int sum=0;
 
	//获取排列
	while(scanf("%c",&val))
	{
		if(val=='\n')
			break;
		else
		{
			s[count] = val;
			count++;
		}
	}

 
	//分别求得元素的排序，如第一个元素需要和剩下的n-1个比较
	//第二个元素需要和剩下的n-2个比较，第三个元素需要和剩下的n-3个元素进行比较等等
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(s[i]>s[j])
				k++;
		}
		num[i]=k;
		k=0;
	}
	for(j=count-1;j>=0;j--)
	{
		sum += factorial(j) * num[k];
		k++;
	}
	printf("是第%d个排列\n",sum+1);
 
	return 0;
}
