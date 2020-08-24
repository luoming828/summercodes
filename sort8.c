/*给定由一些正数（代表长度）组成的数组 A，返回由其中三个长度组成的、面积不为零的三角形的最大周长。

如果不能形成任何面积不为零的三角形，返回 0。

 */
/*从最大的三个开始找，满足组成三角形的条件就返回它们的和，不满足就去掉最大的，再取一个接着判断是否满足组成三角形的条件*/
int largestPerimeter(int* A, int ASize){
    int i,j,max=0,index;
    for(i=0;i<ASize;i++)
	{
        max=0;
        for(j=i;j<ASize;j++)
            if (A[j]>max)
			{
                max=A[j];
                index=j;
			}
        j=A[i];
        A[i]=max;
        A[index]=j;
    }
    for(i=0;i<ASize-2;i++)
	{
        if(A[i]<A[i+1]+A[i+2]) 
            return A[i]+A[i+1]+A[i+2];
    }
    return 0;
}

