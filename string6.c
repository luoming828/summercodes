/*

在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。

给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。

返回可以通过分割得到的平衡字符串的最大数量。*/
/*变量sign作为标志，初始值为0，sign逢'L'加一，逢'R'减一，每当sign回到0，则平衡字符串数目增加一。*/
int balancedStringSplit(char * s)
{
    short i=0,count=0,sign=0;
    while(s[i])
	{
        sign=s[i++]=='L'?sign+1:sign-1;
        if(sign==0) 
			count++;
    }
    return count;
}

