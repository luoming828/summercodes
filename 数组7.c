/*����һ��a�ַ�����һ��n�ַ�������a�ַ������ҳ�b�ַ������ֵĵ�һ��λ�� (��0��ʼ)����������ڣ��򷵻�-1
����: haystack = "hello", needle = "ll"
���: 2

����: haystack = "aaaaa", needle = "bba"
���: -1
*/
#include<stdio.h>
int main()
{
	char a[10],b[9];
	int i=0,j=0,k,l,flag=0;
	printf("�����ַ���a��");
	while((a[i]=getchar())!='\n')
		i++;
	a[i]='\0';
	printf("�����ַ���b��");
	while((b[j]=getchar())!='\n')
		j++;
	b[j]='\0';
	for(k=0;a[k]!='\0';k++)
	{
		if(a[k]=b[0])
		{
			for(l=1;l<j;l++)
			{
				if(a[k+l]!=b[l])
					break;
				if(l=j)
				{
					flag=1;
					printf("%d\n",k);
				}
			
			}
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("-1\n");
	return 0;
}
		
			
		





