/*������һЩ�����������ȣ���ɵ����� A����������������������ɵġ������Ϊ��������ε�����ܳ���

��������γ��κ������Ϊ��������Σ����� 0��

 */
/*������������ʼ�ң�������������ε������ͷ������ǵĺͣ��������ȥ�����ģ���ȡһ�������ж��Ƿ�������������ε�����*/
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

