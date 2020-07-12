#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define Max 100
 
//求阶乘
int factorial(int num)
{
	if(num<=1)
		return 1;
	else
		return (factorial(num-1)*num);
}
 
 
//打印s[]中第num大的元素，找到第num大的元素，对于下标大于num的元素则向前移动一个
void get(int num,char s[],int length)
{
	int j=0;
	for(j=0;j<length;j++)
	{
		if(j==num)
			printf("%c\t",s[j]);
		if(j>num)
		{
			s[j-1] = s[j];
		}
	}
}
 
int main()
{
	char val;		//临时存储'A''B'等元素
	char s[Max];	
	int x;			
 
	int r[Max];		//存储余数2 0 0 0 
	int p[Max];		//存储商3 1 0 0
 
	int i=0,j=0,k=0;
 
	printf("请输入s的集合：");
	while(scanf("%c",&val))
	{
		if(val == '\n')
			break;
		else
		{
			s[i] = val;
			i++;
		}	
	}
	
	printf("请输入X的值：");
	scanf("%d",&x);
 
	//循环求p,r
	for(j=i-1;j>=0;j--)
	{
		p[k] = x/(factorial(j));
		r[k] = x%(factorial(j));
		x = r[k];
		k++;
	}
	//输出结果
	for(j=0;j<i;j++)
	{
		get(p[j],s,i);
	}
	printf("\n");
 
	return 0;
}
