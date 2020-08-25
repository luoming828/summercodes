/*给定一个正整数 num，编写一个函数，如果 num 是一个完全平方数，则返回 True，否则返回 False。*/
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

