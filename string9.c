/*给你一个整数 n，请你返回一个含 n 个字符的字符串，其中每种字符在该字符串中都恰好出现 奇数次 。

返回的字符串必须只含小写英文字母。如果存在多个满足题目要求的字符串，则返回其中任意一个即可。

。*/
char * generateTheString(int n)
{
	int i;
	char *p = (int *)malloc(sizeof(int)*(n+1));
	p[n]='\0';
	
	if(n%2==0)
	{
		p[0]='a';
		for(i=1;i<n;i++)
		{
			p[i]='b';
		}
	}
	else
	{
		p[0]='a';
		if(n==1)
			return p;
		p[1]='b';
		for(i=2;i<n;i++)
			p[i]='c';
	}
	return p;
}


