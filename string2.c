/*����һ���ַ��� S������ ����ת��ġ� �ַ��������в�����ĸ���ַ���������ԭ�أ���������ĸ��λ�÷�����ת��*/
char *reverseOnlyLetters(char *s)
{
	char t;
	if (s == NULL) 
	{
		return NULL;
	}
	int len = strlen(s);
	char *a = (char*)malloc(sizeof(char) * (len + 1));
	memcpy(a, s, sizeof(char) * (len + 1));
	int i = 0, j = len - 1; // ��βָ�� 
	while(i < j) { // ˫ָ�����м��ƶ� 

		while (i < j && !isalpha(a[i])) 
		{
			i++;
		} 
		while (i < j && !isalpha(a[j])) 
		{
			j--;

		} 
		if (i < j ) 
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++, j--;
		}
	}
	return a;
}

