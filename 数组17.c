/*给你一个 m * n 的整数矩阵 mat ，请你将同一条对角线上的元素（从左上到右下）按升序排序后，返回排好序的矩阵。*/
#include<stdio.h>
#define m 3
#define n 4
int main()
{
	int mat[m][n];
	int i,j,k,temp;
	int row=m;
    int col=n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&mat[i][j]);
	}
	

    for(i=0;i<row-1;i++)
    {
        for(j=0;j<row-1-i;j++)
        {
            // 最内层遍历，比较mat[j][k]和mat[j + 1][k + 1]
            for(k=0;k<col-1;k++)
            {
                if(mat[j][k]>mat[j+1][k+1])
                {
                    temp=mat[j][k];
                    mat[j][k]=mat[j+1][k+1];
                    mat[j+1][k+1]=temp;
                }
            }
        }
    }
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
	return 0;
}
