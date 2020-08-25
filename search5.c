/*����һ�������� num����дһ����������� num ��һ����ȫƽ�������򷵻� True�����򷵻� False��*/
bool isPerfectSquare(int num){
    long long int low=0,high=num/2+1,mid=0;

    while(low<=high)
	{
        mid=(low+high)/2;

        if(mid*mid<num) 
			low=mid+1;
        else if(mid*mid>num) 
			high=mid-1;
        else 
			break; 
    }
    if(low>high) 
		return 0;
    else 
		return 1;

}

