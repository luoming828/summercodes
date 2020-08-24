/*leetcode1370. 上升下降字符串*/
/*1，用一个26大小的数组，记录每一个字符出现的次数。
2，首次由前到后顺序取出每一个位置上次数超过0的字符，并将次数减1。
3，下一次由后向前逆序取出每一个位置上次数超过0的字符，并将次数减1。
4，然后顺序、逆序、顺序、逆序……直至将该字符串取完。*/
char * sortString(char * s)
{
    int len = strlen(s);
    int a[26] = {0};
    int i, j = 0;
    char * ans = malloc(sizeof(char) * (len+1));
    bool flag = true; //flag用于判断取的方式，true顺序，false逆序。该次取完变状态。

    //记录每一个字符出现的次数
    for(i=0; i<len; i++)
        a[s[i]-'a']++;
    
    //按要求取出字符
    while(j < len)
	{
        //奇数次顺序取
        if(flag)
		{
            for(i=0; i<26; i++)
			{
                if(a[i] > 0)
				{
                    a[i]--;
                    ans[j++] = i+'a';
                }
            }
            flag = false;
        }
        //偶数次逆序取
        else
		{
            for(i=25; i>=0; i--)
			{
                if(a[i] > 0)
				{
                    a[i]--;
                    ans[j++] = i+'a';
                }
            }
            flag = true;
        }
    }
    ans[j] = '\0';

    return ans;
}

