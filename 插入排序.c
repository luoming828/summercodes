/*��������*/
#include<stdio.h>
int number[100];     //�����涨������ 
void insertionsort(int *number,int n)    
{
    int i=0,j=0,temp=0;  
    for(i=1;i<n;i++)  //ѭ������ 
    {
        temp=number[i];  //��tempÿһ�θ�ֵΪnumber[i] 
        j=i-1;  
        while(j>=0&&temp<number[j])   //�����˳�� (temp���)"<"ΪС����">"Ϊ��С ������
        {
            number[j+1]=number[j];    //�����Ԫ����ǰ�� 
            j--; 
        }
        number[j+1]=temp;   //��"number[j+1]=number[j];"һ����Ϊ 
    }              //������������֮ǰ�Ĵ�,��number[j]��number[j+1]���� 
}
int main() 
{
    int i=0,j,n;
    printf("�������ָ�����\n");    
    scanf("%d",&n);      
    printf("����%d����:\n",n);
    for(i=0;i<n;i++)       
        scanf("%d",&number[i]) ;
    insertionsort(number,n);   
    for(i=0;i<n;i++)    
        printf("%d ",number[i]); 
	printf("\n");
    return 0;
}