/*����һ����Ч�� IPv4 ��ַ address��������� IP ��ַ����Ч���汾��

��ν��Ч�� IP ��ַ����ʵ������ "[.]" ������ÿ�� "."��*/
char * defangIPaddr(char * address)
{
    int len = strlen(address);

    char *a = (char*)malloc(sizeof(char)*len+7);

    for (int i = 0, j = 0; i < len; i++, j++) 
	{
        if (address[i] == '.') 
		{
            a[j] = '[';
            a[++j] = '.';
            a[++j] = ']';
        }
		else
		{
            a[j] = address[i];
        }
    }
    a[len+6] = '\0';//IP������.���л���������[]

    return a;
}

