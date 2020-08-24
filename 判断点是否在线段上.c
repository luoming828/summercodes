/*判断点是否在线段上*/
#include<stdio.h>

int main()
{
	int val1,val2,k,b;
	printf("输入直线的斜率和截距：");
	scanf("%d%d",&k,&b);
	printf("输入坐标x：");
	scanf("%d",&val1);
	printf("输入坐标y：");
	scanf("%d",&val2);
	if(val2==k*val1+b)
		printf("ture\n");
	else
		printf("false\n");
	return 0;
}




