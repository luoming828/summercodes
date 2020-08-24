/*leetcode1370. �����½��ַ���*/
/*1����һ��26��С�����飬��¼ÿһ���ַ����ֵĴ�����
2���״���ǰ����˳��ȡ��ÿһ��λ���ϴ�������0���ַ�������������1��
3����һ���ɺ���ǰ����ȡ��ÿһ��λ���ϴ�������0���ַ�������������1��
4��Ȼ��˳������˳�����򡭡�ֱ�������ַ���ȡ�ꡣ*/
char * sortString(char * s)
{
    int len = strlen(s);
    int a[26] = {0};
    int i, j = 0;
    char * ans = malloc(sizeof(char) * (len+1));
    bool flag = true; //flag�����ж�ȡ�ķ�ʽ��true˳��false���򡣸ô�ȡ���״̬��

    //��¼ÿһ���ַ����ֵĴ���
    for(i=0; i<len; i++)
        a[s[i]-'a']++;
    
    //��Ҫ��ȡ���ַ�
    while(j < len)
	{
        //������˳��ȡ
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
        //ż��������ȡ
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

