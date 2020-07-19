/*给定一个a字符串和一个n字符串，在a字符串中找出b字符串出现的第一个位置 (从0开始)。如果不存在，则返回-1
输入: haystack = "hello", needle = "ll"
输出: 2

输入: haystack = "aaaaa", needle = "bba"
输出: -1
*/
#include<stdio.h>
int main()
{
	char a[10],b[9];
	int i=0,j=0,k,l,flag=0;
	printf("输入字符串a：");
	while((a[i]=getchar())!='\n')
		i++;
	a[i]='\0';
	printf("输入字符串b：");
	while((b[j]=getchar())!='\n')
		j++;
	b[j]='\0';
	for(k=0;a[k]!='\0';k++)
	{
		if(a[k]=b[0])
		{
			for(l=1;l<j;l++)
			{
				if(a[k+l]!=b[l])
					break;
				if(l=j)
				{
					flag=1;
					printf("%d\n",k);
				}
			
			}
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("-1\n");
	return 0;
}
		
			
		





