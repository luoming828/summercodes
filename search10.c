/*你总共有n枚硬币，你需要将它们摆成一个阶梯形状，第k行就必须正好有k枚硬币。

给定一个数字n，找出可形成完整阶梯行的总行数。

n是一个非负整数，并且在32位有符号整型的范围内。
*/
long sum_n(long n)
{
    long res = n*(n+1)/2;
    return res;
}

int arrangeCoins(int n)
{
    int i;
    int mid;
    int low, high;

    low = 0;
    high = n;
    while (low <= high)
	{
        mid = low + (high - low) /2;
        if (sum_n(mid) == n)
            return mid;
        else if (sum_n(mid) > n) 
		{
            high = mid - 1;
        } 
		else 
		{
            low = mid + 1;
        }
    }
    return low - 1;
}
