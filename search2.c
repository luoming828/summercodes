/*给定一个非空的字符串，判断它是否可以由它的一个子串重复多次构成。给定的字符串只含有小写英文字母，并且长度不超过10000。*/

/*枚举*/


bool repeatedSubstringPattern(char* s) 
{
    int n = strlen(s);
	int i,j,flag=0;
    for (i=1;i<=n/2;++i) 
	{
        if (n%i=0) 
		{
            flag=1
            for (j=i;j<n;++j) 
			{
                if (s[j]!=s[j-i]) 
				{
                    falg=0;
                    break;
                }
            }
            if (flag) 
			{
                return true;
            }
        }
    }
    return false;
}
