/*����һ������ n�����㷵�� ���� һ���� n �� ������ͬ ��������ɵ����飬������ n ������Ӻ�Ϊ 0 */
#include<stdio.h>

int main()
{
	int n;
	int i;
	int a[1000];
	scanf("%d",&n);
    for(i=0;i<n/2;i++) 
		a[i]=i+1;
    for(i=n/2;i<n;i++) 
		a[i]=-a[i-n/2];
    if(n%2==1) 
		a[n-1]=0;
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
    
    return 0;
}
