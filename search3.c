/*���㲢���� x ��ƽ���������� x �ǷǸ�������

���ڷ������������������ֻ���������Ĳ��֣�С�����ֽ�����ȥ��*/
#include<stdio.h>

int mySqrt(int x)
{
    int low=0, high=x;
    while (low<=high) 
	{
        
        int mid =low+ (high -1)/2;
        if (mid > x / mid)
            high = mid - 1;
		else if (mid < x / mid)
            low= mid + 1;
        else
            return mid;
       
    }
    return high;
}

int main()
{
	int n;
	int a;
	scanf("%d",&n);
	a=mySqrt(n);
	printf("%d",a);
	return 0;
}
	
    
    



