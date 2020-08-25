/*ʵ�� pow(x, n) �������� x �� n ���ݺ�����*/
double myPow(double x, int n) {
    if (0 == n)
        return 1;

    if (n < 0)
        return 1 / (x * myPow(x, -(n + 1)));

    if (n%2==0) 
	{
        return myPow(x * x, n >> 1);
    } 
	else 
        return x * myPow(x * x, (n - 1) >> 1);
   
}

