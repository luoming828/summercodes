/*ʵ��strStr()������

����һ��haystack �ַ�����һ�� needle �ַ������� haystack �ַ������ҳ� needle �ַ������ֵĵ�һ��λ�� (��0��ʼ)����������ڣ��򷵻� -1��*/
int strStr(char * haystack, char * needle){
    int n,n1,start=0;   //n,n1�ֱ�Ϊ�ַ������ȣ�start��¼��ȷƥ�俪ʼ��λ�á�
    n=strlen(haystack);
    n1=strlen(needle);
    if(n1==0)
        return 0;
    if(n<n1)
        return -1;    
    for(int i=0;i<n;++i) //����iΪhaystack�����ָ�룬����������
    {
        //�ڱ��������У��ҵ�haystack��needle�����һ���ַ���ͬ��λ�ã�������haystack��ȥ��λ��     
        //��n-i�����Ƿ����needle����ĳ���
        if(needle[0]==haystack[i] && (n-i)>=n1)  
        {
            int count=0;     //������¼��һ��forѭ��ƥ����ȷ�Ĵ���
            start=i;
            int z=i;                   
            for(int j=0;j<n1;++j)
            {
                if(needle[j]==haystack[z])
                {
                    ++count;   //��ȷ���1
                    ++z;       //����haystack����zָ�����
                }
            }
            if(count==n1) //��ƥ����ȷ�����Ƿ����needle����ĳ���
                return start;
        }     
    }
    return -1;
}
