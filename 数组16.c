/*ƽ������n���㣬���λ�������������ʾpoints[i] = [xi, yi]������������������Щ����Ҫ����Сʱ�䣨����Ϊ��λ����

����԰�������Ĺ�����ƽ�����ƶ���

ÿһ����ˮƽ������ֱ�����ƶ�һ����λ���ȣ����߿���Խ��ߣ����Կ�����һ������ˮƽ����ֱ������ƶ�һ����λ���ȣ���
���밴�������г��ֵ�˳����������Щ��*/
/*����֮�����ʱ���������������ֵ�ľ���ֵ�������������ֵ�ľ���ֵ�ϴ���Ǹ�*/
#include<stdio.h>
#include<math.h>
#define N 2
int fmax(int a ,int b)
{
	return a>b?a:b;
}
int cal(int x0, int y0, int x1, int y1)
{
    return fmax(abs(x0 - x1), abs(y0 - y1));
}

int main()
{
	int a[N][2];
	int i,j,sum=0;
	for(i=0;i<N;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	for(i=1;i<N;++i)
	{
		sum += cal(a[i][0], a[i][1], a[i-1][0], a[i-1][1]);
	}
	printf("%d\n",sum);
	return 0;
}

