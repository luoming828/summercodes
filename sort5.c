/*��Ч����ĸ��λ��*/
//���ж����ַ��������Ƿ���ȣ����������false������������ַ�����ÿ����ĸ�ĸ�������,�����Ϊ0��true����Ϊ0��false
bool isAnagram(char * s, char * t){
    int n=strlen(s),m=strlen(t);
	int i;
    if(n!=m)
        return false;
    int a[26]={0};
    for(i=0;i<n;i++){
        a[s[i]-'a']++;
        a[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
        if(a[i]!=0)
            return false;
    return true;
}

