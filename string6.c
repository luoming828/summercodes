/*

��һ����ƽ���ַ������У�'L' �� 'R' �ַ�����������ͬ�ġ�

����һ��ƽ���ַ��� s�����㽫���ָ�ɾ����ܶ��ƽ���ַ�����

���ؿ���ͨ���ָ�õ���ƽ���ַ��������������*/
/*����sign��Ϊ��־����ʼֵΪ0��sign��'L'��һ����'R'��һ��ÿ��sign�ص�0����ƽ���ַ�����Ŀ����һ��*/
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
