/*����һ�����г̳��ȱ���ѹ���������б�nums��

����ÿ�����ڵ�����Ԫ�� [freq, val] = [nums[2*i], nums[2*i+1]]������i >= 0����ÿһ�Զ���ʾ��ѹ�����б����� freq��ֵΪval��Ԫ�أ�����Ҫ�����������������б������ɽ�ѹ����б�

���㷵�ؽ�ѹ����б�*/
#include<stdio.h>
#define N 4//NΪż��

int main()
{
	int i,j,k=0;
	int a[N],b[N/2],c[5000];
	int sum=0;
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i=i+2)
		sum=sum+a[i];
	for(i=0;i<sum;i=i+2)
		for(j=0;j<a[i];j++)
		{
			c[k]=a[i+1];
			k++;
		}
	for(i=0;i<sum;i++)
		printf("%d ",c[i]);
	printf("\n");
	return 0;
}




		


	
	
	

