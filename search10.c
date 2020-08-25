/*���ܹ���nöӲ�ң�����Ҫ�����ǰڳ�һ��������״����k�оͱ���������köӲ�ҡ�

����һ������n���ҳ����γ����������е���������

n��һ���Ǹ�������������32λ�з������͵ķ�Χ�ڡ�
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
