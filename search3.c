/*计算并返回 x 的平方根，其中 x 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。*/
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
	
    
    



