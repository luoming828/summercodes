/*����һ���ǿյ��ַ������ж����Ƿ����������һ���Ӵ��ظ���ι��ɡ��������ַ���ֻ����СдӢ����ĸ�����ҳ��Ȳ�����10000��*/

/*ö��*/


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
