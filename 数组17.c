/*����һ�� m * n ���������� mat �����㽫ͬһ���Խ����ϵ�Ԫ�أ������ϵ����£�����������󣬷����ź���ľ���*/
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
            // ���ڲ�������Ƚ�mat[j][k]��mat[j + 1][k + 1]
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
