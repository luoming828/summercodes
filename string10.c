/*实现strStr()函数。

给定一个haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回 -1。*/
int strStr(char * haystack, char * needle){
    int n,n1,start=0;   //n,n1分别为字符串长度，start记录正确匹配开始的位置。
    n=strlen(haystack);
    n1=strlen(needle);
    if(n1==0)
        return 0;
    if(n<n1)
        return -1;    
    for(int i=0;i<n;++i) //首先i为haystack数组的指针，遍历该数组
    {
        //在遍历过程中，找到haystack与needle数组第一个字符相同的位置，并且用haystack减去该位置     
        //（n-i）看是否大于needle数组的长度
        if(needle[0]==haystack[i] && (n-i)>=n1)  
        {
            int count=0;     //用来记录下一个for循环匹配正确的次数
            start=i;
            int z=i;                   
            for(int j=0;j<n1;++j)
            {
                if(needle[j]==haystack[z])
                {
                    ++count;   //正确则加1
                    ++z;       //并且haystack数组z指针后移
                }
            }
            if(count==n1) //看匹配正确次数是否等于needle数组的长度
                return start;
        }     
    }
    return -1;
}
