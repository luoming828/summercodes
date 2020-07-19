/*平面上有n个点，点的位置用整数坐标表示points[i] = [xi, yi]。请你计算访问所有这些点需要的最小时间（以秒为单位）。

你可以按照下面的规则在平面上移动：

每一秒沿水平或者竖直方向移动一个单位长度，或者跨过对角线（可以看作在一秒内向水平和竖直方向各移动一个单位长度）。
必须按照数组中出现的顺序来访问这些点*/
/*两点之间最短时间等于两点横坐标差值的绝对值与两点纵坐标差值的绝对值较大的那个*/
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

